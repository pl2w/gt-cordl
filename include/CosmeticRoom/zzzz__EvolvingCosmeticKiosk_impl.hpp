#pragma once
// IWYU pragma private; include "CosmeticRoom/EvolvingCosmeticKiosk.hpp"
#include "CosmeticRoom/zzzz__EvolvingCosmeticKioskButtonSet_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "CosmeticRoom/zzzz__EvolvingCosmeticKiosk_def.hpp"
#include "CosmeticRoom/zzzz__EvolvingCosmeticKiosk__BuildCosmeticsList_d__14_def.hpp"
#include "CosmeticRoom/zzzz__EvolvingCosmeticKiosk__OnHandScanned_d__17_def.hpp"
#include "CosmeticRoom/zzzz__EvolvingCosmeticKiosk_def.hpp"
#include "GlobalNamespace/zzzz__EvolvingCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::CosmeticRoom::EvolvingCosmeticKiosk::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk::get_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4bd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk.set_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKiosk::*)(bool)>(&::CosmeticRoom::EvolvingCosmeticKiosk::set_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4bda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk.get_VRRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::CosmeticRoom::EvolvingCosmeticKiosk::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk::get_VRRig)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c4bda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"get_VRRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk.get_CosmeticsListBuilding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::CosmeticRoom::EvolvingCosmeticKiosk::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk::get_CosmeticsListBuilding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4be30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"get_CosmeticsListBuilding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk.set_CosmeticsListBuilding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKiosk::*)(bool)>(&::CosmeticRoom::EvolvingCosmeticKiosk::set_CosmeticsListBuilding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4be38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"set_CosmeticsListBuilding", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKiosk::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c4be40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk.BuildCosmeticsList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::CosmeticRoom::EvolvingCosmeticKiosk::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk::BuildCosmeticsList)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c4bf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"BuildCosmeticsList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk.ResetButtonSets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKiosk::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk::ResetButtonSets)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c4c060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"ResetButtonSets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk.UpdateButtonSets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKiosk::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk::UpdateButtonSets)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c4c100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"UpdateButtonSets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk.OnHandScanned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKiosk::*)(::GlobalNamespace::NetPlayer*)>(&::CosmeticRoom::EvolvingCosmeticKiosk::OnHandScanned)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c4c238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"OnHandScanned", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk.ScrollForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKiosk::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk::ScrollForward)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4c2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"ScrollForward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk.ScrollBackward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKiosk::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk::ScrollBackward)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4c404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"ScrollBackward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk.Scroll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKiosk::*)(int32_t)>(&::CosmeticRoom::EvolvingCosmeticKiosk::Scroll)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c4c300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"Scroll", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKiosk::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c4c40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_get__Initialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr bool const& CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_get__Initialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr void CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_set__Initialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Initialized_k__BackingField = value;
}
constexpr ::ArrayW<::UnityW<::CosmeticRoom::EvolvingCosmeticKioskButtonSet>>& CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_get__buttonSets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonSets;
}
constexpr ::ArrayW<::UnityW<::CosmeticRoom::EvolvingCosmeticKioskButtonSet>> const& CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_get__buttonSets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonSets;
}
constexpr void CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_set__buttonSets(::ArrayW<::UnityW<::CosmeticRoom::EvolvingCosmeticKioskButtonSet>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonSets = value;
}
constexpr ::System::Collections::Generic::List_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>*& CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_get__cosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmetics;
}
constexpr ::System::Collections::Generic::List_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>* const& CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_get__cosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmetics;
}
constexpr void CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_set__cosmetics(::System::Collections::Generic::List_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cosmetics = value;
}
constexpr bool& CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_get__CosmeticsListBuilding_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticsListBuilding_k__BackingField;
}
constexpr bool const& CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_get__CosmeticsListBuilding_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticsListBuilding_k__BackingField;
}
constexpr void CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_set__CosmeticsListBuilding_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticsListBuilding_k__BackingField = value;
}
constexpr int32_t& CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_get__cosmeticIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticIdx;
}
constexpr int32_t const& CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_get__cosmeticIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticIdx;
}
constexpr void CosmeticRoom::EvolvingCosmeticKiosk::__cordl_internal_set__cosmeticIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cosmeticIdx = value;
}
inline bool CosmeticRoom::EvolvingCosmeticKiosk::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void CosmeticRoom::EvolvingCosmeticKiosk::set_Initialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::VRRig> CosmeticRoom::EvolvingCosmeticKiosk::get_VRRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"get_VRRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline bool CosmeticRoom::EvolvingCosmeticKiosk::get_CosmeticsListBuilding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"get_CosmeticsListBuilding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void CosmeticRoom::EvolvingCosmeticKiosk::set_CosmeticsListBuilding(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"set_CosmeticsListBuilding", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void CosmeticRoom::EvolvingCosmeticKiosk::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* CosmeticRoom::EvolvingCosmeticKiosk::BuildCosmeticsList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"BuildCosmeticsList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void CosmeticRoom::EvolvingCosmeticKiosk::ResetButtonSets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"ResetButtonSets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::EvolvingCosmeticKiosk::UpdateButtonSets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"UpdateButtonSets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::EvolvingCosmeticKiosk::OnHandScanned(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"OnHandScanned", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void CosmeticRoom::EvolvingCosmeticKiosk::ScrollForward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"ScrollForward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::EvolvingCosmeticKiosk::ScrollBackward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"ScrollBackward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::EvolvingCosmeticKiosk::Scroll(int32_t  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {"Scroll", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void CosmeticRoom::EvolvingCosmeticKiosk::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CosmeticRoom::EvolvingCosmeticKiosk* CosmeticRoom::EvolvingCosmeticKiosk::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CosmeticRoom::EvolvingCosmeticKiosk*>());
}
// Ctor Parameters []
constexpr ::CosmeticRoom::EvolvingCosmeticKiosk::EvolvingCosmeticKiosk()   {
}
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData.get_EqualityContract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::get_EqualityContract)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c4c494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                    {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::ToString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c4c4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                    {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData.PrintMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::*)(::System::Text::StringBuilder*)>(&::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::PrintMembers)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c4c5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                    {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*, ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*)>(&::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c4c688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), ::i2c::type_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*, ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*)>(&::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c4c6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                        {"op_Equality", {}, {::i2c::type_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), ::i2c::type_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::GetHashCode)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c4c6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                    {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::*)(::System::Object*)>(&::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c4c7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                    {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::*)(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*)>(&::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::Equals)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c4c864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                    {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData._Clone_$
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData* (::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::_Clone_$)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c4c988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                    {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::*)(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*)>(&::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c4c9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                        {".ctor", {}, {::i2c::type_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::*)()>(&::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4ca28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EvolvingCosmetic>& CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::__cordl_internal_get_EvolvingCosmetic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EvolvingCosmetic;
}
constexpr ::UnityW<::GlobalNamespace::EvolvingCosmetic> const& CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::__cordl_internal_get_EvolvingCosmetic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EvolvingCosmetic;
}
constexpr void CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::__cordl_internal_set_EvolvingCosmetic(::UnityW<::GlobalNamespace::EvolvingCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EvolvingCosmetic = value;
}
constexpr ::StringW& CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::__cordl_internal_get_PlayfabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayfabId;
}
constexpr ::StringW const& CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::__cordl_internal_get_PlayfabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayfabId;
}
constexpr void CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::__cordl_internal_set_PlayfabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayfabId = value;
}
inline ::System::Type* CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::get_EqualityContract()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::PrintMembers(::System::Text::StringBuilder*  builder)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, builder);
}
inline bool CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::op_Inequality(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  left, ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), ::i2c::type_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::op_Equality(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  left, ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                        {"op_Equality", {}, {::i2c::type_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), ::i2c::type_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::Equals(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData* CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::_Clone_$()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(this, ___internal_method);
}
inline void CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::_ctor(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  original)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                        {".ctor", {}, {::i2c::type_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, original);
}
inline void CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [CompilerGenerated]
inline ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData* CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::New_ctor(::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*  original)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>(original));
}
inline ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData* CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>"
constexpr  CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::operator ::System::IEquatable_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>*() noexcept {
return static_cast<::System::IEquatable_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>"
constexpr ::System::IEquatable_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>* CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::i___System__IEquatable_1___CosmeticRoom__EvolvingCosmeticKiosk_CosmeticData__() noexcept {
return static_cast<::System::IEquatable_1<::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::CosmeticRoom::EvolvingCosmeticKiosk_CosmeticData::EvolvingCosmeticKiosk_CosmeticData()   {
}
