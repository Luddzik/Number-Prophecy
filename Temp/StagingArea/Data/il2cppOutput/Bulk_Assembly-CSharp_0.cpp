#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// LevelManager
struct LevelManager_t3355282079;
// System.String
struct String_t;
// NumberWizard
struct NumberWizard_t979548290;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_LevelManager3355282079.h"
#include "AssemblyU2DCSharp_LevelManager3355282079MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_SceneManagement_SceneManager90660965MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application354826772MethodDeclarations.h"
#include "AssemblyU2DCSharp_NumberWizard979548290.h"
#include "AssemblyU2DCSharp_NumberWizard979548290MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Random1170710517MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "mscorlib_System_Int322071877448MethodDeclarations.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m1225645824 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m3771066388 (LevelManager_t3355282079 * __this, String_t* ___name0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name0;
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::Quit()
extern "C"  void LevelManager_Quit_m647924571 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	{
		Application_Quit_m3885595876(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::.ctor()
extern "C"  void NumberWizard__ctor_m2798033351 (NumberWizard_t979548290 * __this, const MethodInfo* method)
{
	{
		__this->set_minInt_2(1);
		__this->set_maxInt_3(((int32_t)1000));
		__this->set_numberOfGuessesAllowed_7(6);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::Start()
extern "C"  void NumberWizard_Start_m3127029539 (NumberWizard_t979548290 * __this, const MethodInfo* method)
{
	{
		NumberWizard_StartGame_m3364814861(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::StartGame()
extern "C"  void NumberWizard_StartGame_m3364814861 (NumberWizard_t979548290 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_maxInt_3();
		__this->set_max_4(L_0);
		int32_t L_1 = __this->get_minInt_2();
		__this->set_min_5(L_1);
		int32_t L_2 = __this->get_min_5();
		int32_t L_3 = __this->get_max_4();
		int32_t L_4 = Random_Range_m694320887(NULL /*static, unused*/, L_2, ((int32_t)((int32_t)L_3+(int32_t)1)), /*hidden argument*/NULL);
		__this->set_guess_6(L_4);
		Text_t356221433 * L_5 = __this->get_text_8();
		int32_t* L_6 = __this->get_address_of_guess_6();
		String_t* L_7 = Int32_ToString_m2960866144(L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		return;
	}
}
// System.Void NumberWizard::LowerGuess()
extern "C"  void NumberWizard_LowerGuess_m513703183 (NumberWizard_t979548290 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_guess_6();
		__this->set_max_4(L_0);
		NumberWizard_NextGuess_m3101775863(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::HigherGuess()
extern "C"  void NumberWizard_HigherGuess_m2103935057 (NumberWizard_t979548290 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_guess_6();
		__this->set_min_5(L_0);
		NumberWizard_NextGuess_m3101775863(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NumberWizard::NextGuess()
extern Il2CppCodeGenString* _stringLiteral339800536;
extern const uint32_t NumberWizard_NextGuess_m3101775863_MetadataUsageId;
extern "C"  void NumberWizard_NextGuess_m3101775863 (NumberWizard_t979548290 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NumberWizard_NextGuess_m3101775863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_min_5();
		int32_t L_1 = __this->get_max_4();
		int32_t L_2 = Random_Range_m694320887(NULL /*static, unused*/, L_0, ((int32_t)((int32_t)L_1+(int32_t)1)), /*hidden argument*/NULL);
		__this->set_guess_6(L_2);
		Text_t356221433 * L_3 = __this->get_text_8();
		int32_t* L_4 = __this->get_address_of_guess_6();
		String_t* L_5 = Int32_ToString_m2960866144(L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		int32_t L_6 = __this->get_numberOfGuessesAllowed_7();
		__this->set_numberOfGuessesAllowed_7(((int32_t)((int32_t)L_6-(int32_t)1)));
		int32_t L_7 = __this->get_numberOfGuessesAllowed_7();
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral339800536, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
