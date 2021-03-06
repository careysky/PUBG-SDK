// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OptionButton.OptionButton_C.SetButtonBgColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            InBackgroundColor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionButton_C::SetButtonBgColor(const struct FLinearColor& InBackgroundColor)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdd554373);

	UOptionButton_C_SetButtonBgColor_Params params;
	params.InBackgroundColor = InBackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionButton.OptionButton_C.GetText_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UOptionButton_C::GetText_1()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xb692dac2);

	UOptionButton_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionButton.OptionButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionButton_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xabee323);

	UOptionButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionButton.OptionButton_C.ExecuteUbergraph_OptionButton
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionButton_C::ExecuteUbergraph_OptionButton(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x5ef90316);

	UOptionButton_C_ExecuteUbergraph_OptionButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionButton.OptionButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x9885de70);

	UOptionButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
