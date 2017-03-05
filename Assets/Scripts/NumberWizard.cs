using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class NumberWizard : MonoBehaviour {
	[SerializeField] private int minInt = 1;
	[SerializeField] private int maxInt = 1000;
	private int max;
	private int min;
	private int guess;

	private int numberOfGuessesAllowed = 6;

	public Text text;

	void Start () {
		StartGame ();
	}

	void StartGame () {
		max = maxInt;
		min = minInt;

		guess = Random.Range (min, max+1);
		text.text = guess.ToString ();
	}

	public void LowerGuess () {
		max = guess;
		NextGuess ();
	}

	public void HigherGuess () {
		min = guess;
		NextGuess ();
	}

	void NextGuess () {
		guess = Random.Range (min, max+1);
		text.text = guess.ToString ();
		numberOfGuessesAllowed -= 1;
		if (numberOfGuessesAllowed <= 0) {
			UnityEngine.SceneManagement.SceneManager.LoadScene ("Win");
		}
	}
}
