#pragma once

// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Water_Dive_Car_BP.P_Water_Dive_Car_BP_C
// 0x0010 (0x0408 - 0x03F8)
class AP_Water_Dive_Car_BP_C : public ATslParticle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              MaxSpeed;                                                 // 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRadius;                                                // 0x0404(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass P_Water_Dive_Car_BP.P_Water_Dive_Car_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnParameterUpdated();
	void ExecuteUbergraph_P_Water_Dive_Car_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
