#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticTryOnNotifier.hpp"
#include "GorillaTag/zzzz__CosmeticTryOnNotifier_Mode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/zzzz__CosmeticTryOnNotifier_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__VRRigCollection_def.hpp"
#include "GorillaTag/zzzz__CosmeticTryOnNotifier_Mode_def.hpp"
#include "GorillaTag/zzzz__StringList_def.hpp"
//  Writing Method size for method: ::GorillaTag::CosmeticTryOnNotifier.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CosmeticTryOnNotifier::*)()>(&::GorillaTag::CosmeticTryOnNotifier::Awake)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5d28328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticTryOnNotifier*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticTryOnNotifier.PlayerEnteredTryOnSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CosmeticTryOnNotifier::*)(::GlobalNamespace::RigContainer*)>(&::GorillaTag::CosmeticTryOnNotifier::PlayerEnteredTryOnSpace)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d28524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticTryOnNotifier*>(),
                        {"PlayerEnteredTryOnSpace", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticTryOnNotifier.PlayerLeftTryOnSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CosmeticTryOnNotifier::*)(::GlobalNamespace::RigContainer*)>(&::GorillaTag::CosmeticTryOnNotifier::PlayerLeftTryOnSpace)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d285e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticTryOnNotifier*>(),
                        {"PlayerLeftTryOnSpace", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticTryOnNotifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CosmeticTryOnNotifier::*)()>(&::GorillaTag::CosmeticTryOnNotifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d286a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticTryOnNotifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRigCollection>& GorillaTag::CosmeticTryOnNotifier::__cordl_internal_get_m_vrrigCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_vrrigCollection;
}
constexpr ::UnityW<::GlobalNamespace::VRRigCollection> const& GorillaTag::CosmeticTryOnNotifier::__cordl_internal_get_m_vrrigCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_vrrigCollection;
}
constexpr void GorillaTag::CosmeticTryOnNotifier::__cordl_internal_set_m_vrrigCollection(::UnityW<::GlobalNamespace::VRRigCollection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_vrrigCollection = value;
}
constexpr ::GlobalNamespace::CosmeticTryOnNotifier_Mode& GorillaTag::CosmeticTryOnNotifier::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::CosmeticTryOnNotifier_Mode const& GorillaTag::CosmeticTryOnNotifier::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GorillaTag::CosmeticTryOnNotifier::__cordl_internal_set_mode(::GlobalNamespace::CosmeticTryOnNotifier_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::UnityW<::GorillaTag::StringList>& GorillaTag::CosmeticTryOnNotifier::__cordl_internal_get_unlockList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockList;
}
constexpr ::UnityW<::GorillaTag::StringList> const& GorillaTag::CosmeticTryOnNotifier::__cordl_internal_get_unlockList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockList;
}
constexpr void GorillaTag::CosmeticTryOnNotifier::__cordl_internal_set_unlockList(::UnityW<::GorillaTag::StringList>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockList = value;
}
inline void GorillaTag::CosmeticTryOnNotifier::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticTryOnNotifier*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::CosmeticTryOnNotifier::PlayerEnteredTryOnSpace(::GlobalNamespace::RigContainer*  playerRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticTryOnNotifier*>(),
                        {"PlayerEnteredTryOnSpace", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerRig);
}
inline void GorillaTag::CosmeticTryOnNotifier::PlayerLeftTryOnSpace(::GlobalNamespace::RigContainer*  playerRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticTryOnNotifier*>(),
                        {"PlayerLeftTryOnSpace", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerRig);
}
inline void GorillaTag::CosmeticTryOnNotifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticTryOnNotifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::CosmeticTryOnNotifier* GorillaTag::CosmeticTryOnNotifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::CosmeticTryOnNotifier*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticTryOnNotifier::CosmeticTryOnNotifier()   {
}
