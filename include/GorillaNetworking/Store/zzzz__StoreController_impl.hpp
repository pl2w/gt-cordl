#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/Store/zzzz__StoreController_def.hpp"
#include "GorillaNetworking/Store/zzzz__DynamicCosmeticStand_def.hpp"
#include "GorillaNetworking/Store/zzzz__StandImport_def.hpp"
#include "GorillaNetworking/Store/zzzz__StoreController_def.hpp"
#include "GorillaNetworking/Store/zzzz__StoreDepartment_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__AllCosmeticsArraySO_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticSO_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)()>(&::GorillaNetworking::Store::StoreController::Awake)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5caf980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.RefreshCosmeticStandsDictionaryFromDepartments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)()>(&::GorillaNetworking::Store::StoreController::RefreshCosmeticStandsDictionaryFromDepartments)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x5cafb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"RefreshCosmeticStandsDictionaryFromDepartments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.AddStandToCosmeticStandsDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)(::GorillaNetworking::Store::DynamicCosmeticStand*)>(&::GorillaNetworking::Store::StoreController::AddStandToCosmeticStandsDictionary)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5ca9920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"AddStandToCosmeticStandsDictionary", {}, {::i2c::type_of<::GorillaNetworking::Store::DynamicCosmeticStand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.RemoveStandFromDynamicCosmeticStandsDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)(::GorillaNetworking::Store::DynamicCosmeticStand*)>(&::GorillaNetworking::Store::StoreController::RemoveStandFromDynamicCosmeticStandsDictionary)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5caa2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"RemoveStandFromDynamicCosmeticStandsDictionary", {}, {::i2c::type_of<::GorillaNetworking::Store::DynamicCosmeticStand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.Create_StandsByPlayfabIDDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)()>(&::GorillaNetworking::Store::StoreController::Create_StandsByPlayfabIDDictionary)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5cb0130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"Create_StandsByPlayfabIDDictionary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.AddStandToPlayfabIDDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)(::GorillaNetworking::Store::DynamicCosmeticStand*)>(&::GorillaNetworking::Store::StoreController::AddStandToPlayfabIDDictionary)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5ca9c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"AddStandToPlayfabIDDictionary", {}, {::i2c::type_of<::GorillaNetworking::Store::DynamicCosmeticStand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.RemoveStandFromPlayFabIDDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)(::GorillaNetworking::Store::DynamicCosmeticStand*)>(&::GorillaNetworking::Store::StoreController::RemoveStandFromPlayFabIDDictionary)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5caa63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"RemoveStandFromPlayFabIDDictionary", {}, {::i2c::type_of<::GorillaNetworking::Store::DynamicCosmeticStand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.ExportCosmeticStandLayoutWithItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)()>(&::GorillaNetworking::Store::StoreController::ExportCosmeticStandLayoutWithItems)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb027c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"ExportCosmeticStandLayoutWithItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.ExportCosmeticStandLayoutWITHOUTItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)()>(&::GorillaNetworking::Store::StoreController::ExportCosmeticStandLayoutWITHOUTItems)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb0280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"ExportCosmeticStandLayoutWITHOUTItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.ImportCosmeticStandLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)()>(&::GorillaNetworking::Store::StoreController::ImportCosmeticStandLayout)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb0284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"ImportCosmeticStandLayout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.InitializeFromTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)()>(&::GorillaNetworking::Store::StoreController::InitializeFromTitleData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5cb0288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"InitializeFromTitleData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.ImportCosmeticStandLayoutFromTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)(::StringW)>(&::GorillaNetworking::Store::StoreController::ImportCosmeticStandLayoutFromTitleData)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5cb0418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"ImportCosmeticStandLayoutFromTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.InitializeStandFromTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)(::GorillaNetworking::Store::DynamicCosmeticStand*)>(&::GorillaNetworking::Store::StoreController::InitializeStandFromTitleData)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5ca9e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"InitializeStandFromTitleData", {}, {::i2c::type_of<::GorillaNetworking::Store::DynamicCosmeticStand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.InitalizeCosmeticStands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)()>(&::GorillaNetworking::Store::StoreController::InitalizeCosmeticStands)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5cb099c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"InitalizeCosmeticStands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.LoadCosmeticOntoStand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)(::StringW, ::StringW)>(&::GorillaNetworking::Store::StoreController::LoadCosmeticOntoStand)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5cb09cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"LoadCosmeticOntoStand", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.ClearCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)()>(&::GorillaNetworking::Store::StoreController::ClearCosmetics)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5cb0af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"ClearCosmetics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.FindCosmeticInAllCosmeticsArraySO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> (*)(::StringW)>(&::GorillaNetworking::Store::StoreController::FindCosmeticInAllCosmeticsArraySO)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cabb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"FindCosmeticInAllCosmeticsArraySO", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.FindCosmeticStandByCosmeticName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand> (::GorillaNetworking::Store::StoreController::*)(::StringW)>(&::GorillaNetworking::Store::StoreController::FindCosmeticStandByCosmeticName)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5cb0ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"FindCosmeticStandByCosmeticName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.FindAllDepartments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)()>(&::GorillaNetworking::Store::StoreController::FindAllDepartments)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cb0e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"FindAllDepartments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.SaveAllCosmeticsPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)()>(&::GorillaNetworking::Store::StoreController::SaveAllCosmeticsPositions)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x5cb0ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"SaveAllCosmeticsPositions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController.SetForGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaNetworking::Store::StoreController::SetForGame)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5cb1390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"SetForGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)()>(&::GorillaNetworking::Store::StoreController::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cb15d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController._InitializeFromTitleData_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController::*)(::StringW)>(&::GorillaNetworking::Store::StoreController::_InitializeFromTitleData_b__19_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb162c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"<InitializeFromTitleData>b__19_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreDepartment>>*& GorillaNetworking::Store::StoreController::__cordl_internal_get_Departments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Departments;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreDepartment>>* const& GorillaNetworking::Store::StoreController::__cordl_internal_get_Departments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Departments;
}
constexpr void GorillaNetworking::Store::StoreController::__cordl_internal_set_Departments(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreDepartment>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Departments = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*& GorillaNetworking::Store::StoreController::__cordl_internal_get_CosmeticStandsDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CosmeticStandsDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>* const& GorillaNetworking::Store::StoreController::__cordl_internal_get_CosmeticStandsDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CosmeticStandsDict;
}
constexpr void GorillaNetworking::Store::StoreController::__cordl_internal_set_CosmeticStandsDict(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CosmeticStandsDict = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*>*& GorillaNetworking::Store::StoreController::__cordl_internal_get_StandsByPlayfabID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StandsByPlayfabID;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*>* const& GorillaNetworking::Store::StoreController::__cordl_internal_get_StandsByPlayfabID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StandsByPlayfabID;
}
constexpr void GorillaNetworking::Store::StoreController::__cordl_internal_set_StandsByPlayfabID(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StandsByPlayfabID = value;
}
constexpr ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>& GorillaNetworking::Store::StoreController::__cordl_internal_get_AllCosmeticsArraySO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllCosmeticsArraySO;
}
constexpr ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO> const& GorillaNetworking::Store::StoreController::__cordl_internal_get_AllCosmeticsArraySO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllCosmeticsArraySO;
}
constexpr void GorillaNetworking::Store::StoreController::__cordl_internal_set_AllCosmeticsArraySO(::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllCosmeticsArraySO = value;
}
constexpr bool& GorillaNetworking::Store::StoreController::__cordl_internal_get_cosmeticsInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticsInitialized;
}
constexpr bool const& GorillaNetworking::Store::StoreController::__cordl_internal_get_cosmeticsInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticsInitialized;
}
constexpr void GorillaNetworking::Store::StoreController::__cordl_internal_set_cosmeticsInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticsInitialized = value;
}
constexpr bool& GorillaNetworking::Store::StoreController::__cordl_internal_get_LoadFromTitleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadFromTitleData;
}
constexpr bool const& GorillaNetworking::Store::StoreController::__cordl_internal_get_LoadFromTitleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadFromTitleData;
}
constexpr void GorillaNetworking::Store::StoreController::__cordl_internal_set_LoadFromTitleData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LoadFromTitleData = value;
}
constexpr ::StringW& GorillaNetworking::Store::StoreController::__cordl_internal_get_exportHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportHeader;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreController::__cordl_internal_get_exportHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportHeader;
}
constexpr void GorillaNetworking::Store::StoreController::__cordl_internal_set_exportHeader(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportHeader = value;
}
constexpr ::GorillaNetworking::Store::StandImport*& GorillaNetworking::Store::StoreController::__cordl_internal_get_standImport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standImport;
}
constexpr ::GorillaNetworking::Store::StandImport* const& GorillaNetworking::Store::StoreController::__cordl_internal_get_standImport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standImport;
}
constexpr void GorillaNetworking::Store::StoreController::__cordl_internal_set_standImport(::GorillaNetworking::Store::StandImport*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standImport = value;
}
inline void GorillaNetworking::Store::StoreController::setStaticF_instance(::UnityW<::GorillaNetworking::Store::StoreController>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::Store::StoreController>, "instance", ::GorillaNetworking::Store::StoreController*>(std::forward<::UnityW<::GorillaNetworking::Store::StoreController>>(value));
}
inline ::UnityW<::GorillaNetworking::Store::StoreController> GorillaNetworking::Store::StoreController::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::Store::StoreController>, "instance", ::GorillaNetworking::Store::StoreController*>();
}
inline void GorillaNetworking::Store::StoreController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreController::RefreshCosmeticStandsDictionaryFromDepartments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"RefreshCosmeticStandsDictionaryFromDepartments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreController::AddStandToCosmeticStandsDictionary(::GorillaNetworking::Store::DynamicCosmeticStand*  stand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"AddStandToCosmeticStandsDictionary", {}, {::i2c::type_of<::GorillaNetworking::Store::DynamicCosmeticStand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stand);
}
inline void GorillaNetworking::Store::StoreController::RemoveStandFromDynamicCosmeticStandsDictionary(::GorillaNetworking::Store::DynamicCosmeticStand*  stand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"RemoveStandFromDynamicCosmeticStandsDictionary", {}, {::i2c::type_of<::GorillaNetworking::Store::DynamicCosmeticStand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stand);
}
inline void GorillaNetworking::Store::StoreController::Create_StandsByPlayfabIDDictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"Create_StandsByPlayfabIDDictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreController::AddStandToPlayfabIDDictionary(::GorillaNetworking::Store::DynamicCosmeticStand*  dynamicCosmeticStand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"AddStandToPlayfabIDDictionary", {}, {::i2c::type_of<::GorillaNetworking::Store::DynamicCosmeticStand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dynamicCosmeticStand);
}
inline void GorillaNetworking::Store::StoreController::RemoveStandFromPlayFabIDDictionary(::GorillaNetworking::Store::DynamicCosmeticStand*  dynamicCosmeticStand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"RemoveStandFromPlayFabIDDictionary", {}, {::i2c::type_of<::GorillaNetworking::Store::DynamicCosmeticStand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dynamicCosmeticStand);
}
inline void GorillaNetworking::Store::StoreController::ExportCosmeticStandLayoutWithItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"ExportCosmeticStandLayoutWithItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreController::ExportCosmeticStandLayoutWITHOUTItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"ExportCosmeticStandLayoutWITHOUTItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreController::ImportCosmeticStandLayout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"ImportCosmeticStandLayout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreController::InitializeFromTitleData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"InitializeFromTitleData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreController::ImportCosmeticStandLayoutFromTitleData(::StringW  TSVData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"ImportCosmeticStandLayoutFromTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, TSVData);
}
inline void GorillaNetworking::Store::StoreController::InitializeStandFromTitleData(::GorillaNetworking::Store::DynamicCosmeticStand*  stand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"InitializeStandFromTitleData", {}, {::i2c::type_of<::GorillaNetworking::Store::DynamicCosmeticStand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stand);
}
inline void GorillaNetworking::Store::StoreController::InitalizeCosmeticStands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"InitalizeCosmeticStands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreController::LoadCosmeticOntoStand(::StringW  standID, ::StringW  playFabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"LoadCosmeticOntoStand", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standID, playFabId);
}
inline void GorillaNetworking::Store::StoreController::ClearCosmetics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"ClearCosmetics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> GorillaNetworking::Store::StoreController::FindCosmeticInAllCosmeticsArraySO(::StringW  playfabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"FindCosmeticInAllCosmeticsArraySO", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>(nullptr, ___internal_method, playfabId);
}
inline ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand> GorillaNetworking::Store::StoreController::FindCosmeticStandByCosmeticName(::StringW  PlayFabID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"FindCosmeticStandByCosmeticName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>(this, ___internal_method, PlayFabID);
}
inline void GorillaNetworking::Store::StoreController::FindAllDepartments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"FindAllDepartments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreController::SaveAllCosmeticsPositions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"SaveAllCosmeticsPositions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreController::SetForGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"SetForGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaNetworking::Store::StoreController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreController::_InitializeFromTitleData_b__19_0(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController*>(),
                        {"<InitializeFromTitleData>b__19_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GorillaNetworking::Store::StoreController* GorillaNetworking::Store::StoreController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StoreController*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StoreController::StoreController()   {
}
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController___c::*)()>(&::GorillaNetworking::Store::StoreController___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb1698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreController___c._InitializeFromTitleData_b__19_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreController___c::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::Store::StoreController___c::_InitializeFromTitleData_b__19_1)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cb16a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController___c*>(),
                        {"<InitializeFromTitleData>b__19_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::Store::StoreController___c::setStaticF___9(::GorillaNetworking::Store::StoreController___c*  value)  {
::cordl_internals::setStaticField<::GorillaNetworking::Store::StoreController___c*, "<>9", ::GorillaNetworking::Store::StoreController___c*>(std::forward<::GorillaNetworking::Store::StoreController___c*>(value));
}
inline ::GorillaNetworking::Store::StoreController___c* GorillaNetworking::Store::StoreController___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaNetworking::Store::StoreController___c*, "<>9", ::GorillaNetworking::Store::StoreController___c*>();
}
inline void GorillaNetworking::Store::StoreController___c::setStaticF___9__19_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__19_1", ::GorillaNetworking::Store::StoreController___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GorillaNetworking::Store::StoreController___c::getStaticF___9__19_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__19_1", ::GorillaNetworking::Store::StoreController___c*>();
}
inline void GorillaNetworking::Store::StoreController___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreController___c::_InitializeFromTitleData_b__19_1(::PlayFab::PlayFabError*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreController___c*>(),
                        {"<InitializeFromTitleData>b__19_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::GorillaNetworking::Store::StoreController___c* GorillaNetworking::Store::StoreController___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StoreController___c*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StoreController___c::StoreController___c()   {
}
