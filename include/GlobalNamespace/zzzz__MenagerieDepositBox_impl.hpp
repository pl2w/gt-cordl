#pragma once
// IWYU pragma private; include "GlobalNamespace/MenagerieDepositBox.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenagerieDepositBox_def.hpp"
#include "GlobalNamespace/zzzz__MenagerieCritter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenagerieDepositBox.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieDepositBox::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MenagerieDepositBox::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x56fc888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieDepositBox*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieDepositBox.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieDepositBox::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MenagerieDepositBox::OnTriggerExit)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x56fc9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieDepositBox*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenagerieDepositBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenagerieDepositBox::*)()>(&::GlobalNamespace::MenagerieDepositBox::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fcb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieDepositBox*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*& GlobalNamespace::MenagerieDepositBox::__cordl_internal_get_OnCritterInserted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCritterInserted;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>* const& GlobalNamespace::MenagerieDepositBox::__cordl_internal_get_OnCritterInserted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCritterInserted;
}
constexpr void GlobalNamespace::MenagerieDepositBox::__cordl_internal_set_OnCritterInserted(::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCritterInserted = value;
}
inline void GlobalNamespace::MenagerieDepositBox::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieDepositBox*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MenagerieDepositBox::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieDepositBox*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MenagerieDepositBox::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenagerieDepositBox*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenagerieDepositBox* GlobalNamespace::MenagerieDepositBox::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenagerieDepositBox*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenagerieDepositBox::MenagerieDepositBox()   {
}
