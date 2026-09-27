#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticsProximityReactorManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager> (*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d88b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.get_Cosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>* (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::get_Cosmetics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d88be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"get_Cosmetics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.add_OnCosmeticRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::add_OnCosmeticRegistered)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d88be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"add_OnCosmeticRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.remove_OnCosmeticRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::remove_OnCosmeticRegistered)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d88cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"remove_OnCosmeticRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::Awake)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5d88dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d88f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::OnDisable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d88f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)(::GorillaTag::Cosmetics::CosmeticsProximityReactor*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::Register)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x5d89000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)(::GorillaTag::Cosmetics::CosmeticsProximityReactor*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::Unregister)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5d89494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::SliceUpdate)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x5d8969c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.ProcessOneGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::ProcessOneGroup)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d89e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"ProcessOneGroup", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.CheckProximity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::CheckProximity)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5d8a270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"CheckProximity", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.BreakTheBoundForGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::BreakTheBoundForGroup)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5d8a0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"BreakTheBoundForGroup", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.TryFindAnyCosmeticPartner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)(::GorillaTag::Cosmetics::CosmeticsProximityReactor*, ::by_ref<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::TryFindAnyCosmeticPartner)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5d8a60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"TryFindAnyCosmeticPartner", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::by_ref<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.ShouldSkipSameIdPair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GorillaTag::Cosmetics::CosmeticsProximityReactor*, ::GorillaTag::Cosmetics::CosmeticsProximityReactor*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::ShouldSkipSameIdPair)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d8a590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"ShouldSkipSameIdPair", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.AreCollidersWithinThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GorillaTag::Cosmetics::CosmeticsProximityReactor*, ::GorillaTag::Cosmetics::CosmeticsProximityReactor*, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::AreCollidersWithinThreshold)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5d89eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"AreCollidersWithinThreshold", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.AnyGroupHasTwo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::AnyGroupHasTwo)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5d89af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"AnyGroupHasTwo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager.RebuildTypeKeysCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::RebuildTypeKeysCache)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5d89c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"RebuildTypeKeysCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5d8a950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_cosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmetics;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>* const& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_cosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmetics;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_set_cosmetics(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmetics = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_gorillaBodyPart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaBodyPart;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>* const& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_gorillaBodyPart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaBodyPart;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_set_gorillaBodyPart(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaBodyPart = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>*& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_byType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___byType;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>* const& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_byType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___byType;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_set_byType(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___byType = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>,int32_t>*& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_matchedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchedFrame;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>,int32_t>* const& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_matchedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchedFrame;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_set_matchedFrame(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchedFrame = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_typeKeysCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeKeysCache;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_typeKeysCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeKeysCache;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_set_typeKeysCache(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___typeKeysCache = value;
}
constexpr bool& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_typeKeysDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeKeysDirty;
}
constexpr bool const& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_typeKeysDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeKeysDirty;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_set_typeKeysDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___typeKeysDirty = value;
}
constexpr int32_t& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_groupCursor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupCursor;
}
constexpr int32_t const& GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_get_groupCursor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupCursor;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::__cordl_internal_set_groupCursor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupCursor = value;
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::setStaticF__instance(::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager>, "_instance", ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(std::forward<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager>>(value));
}
inline ::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager> GorillaTag::Cosmetics::CosmeticsProximityReactorManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager>, "_instance", ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>();
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::setStaticF_OnCosmeticRegistered(::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*, "OnCosmeticRegistered", ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(std::forward<::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>(value));
}
inline ::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>* GorillaTag::Cosmetics::CosmeticsProximityReactorManager::getStaticF_OnCosmeticRegistered()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*, "OnCosmeticRegistered", ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>();
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::setStaticF_SharedKeysCache(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "SharedKeysCache", ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GorillaTag::Cosmetics::CosmeticsProximityReactorManager::getStaticF_SharedKeysCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "SharedKeysCache", ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>();
}
inline ::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager> GorillaTag::Cosmetics::CosmeticsProximityReactorManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager>>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>* GorillaTag::Cosmetics::CosmeticsProximityReactorManager::get_Cosmetics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"get_Cosmetics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::add_OnCosmeticRegistered(::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"add_OnCosmeticRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::remove_OnCosmeticRegistered(::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"remove_OnCosmeticRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::Register(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  cosmetic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmetic);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::Unregister(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  cosmetic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmetic);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::ProcessOneGroup(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"ProcessOneGroup", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactorManager::CheckProximity(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"CheckProximity", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, group);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::BreakTheBoundForGroup(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"BreakTheBoundForGroup", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactorManager::TryFindAnyCosmeticPartner(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  a, ::by_ref<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>  partner, ::by_ref<::UnityEngine::Vector3>  contact)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"TryFindAnyCosmeticPartner", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::by_ref<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, partner, contact);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactorManager::ShouldSkipSameIdPair(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  a, ::GorillaTag::Cosmetics::CosmeticsProximityReactor*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"ShouldSkipSameIdPair", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactorManager::AreCollidersWithinThreshold(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  a, ::GorillaTag::Cosmetics::CosmeticsProximityReactor*  b, float_t  threshold, ::by_ref<::UnityEngine::Vector3>  contactPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"AreCollidersWithinThreshold", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, threshold, contactPoint);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactorManager::AnyGroupHasTwo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"AnyGroupHasTwo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::RebuildTypeKeysCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {"RebuildTypeKeysCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactorManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager* GorillaTag::Cosmetics::CosmeticsProximityReactorManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GorillaTag::Cosmetics::CosmeticsProximityReactorManager::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GorillaTag::Cosmetics::CosmeticsProximityReactorManager::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager::CosmeticsProximityReactorManager()   {
}
