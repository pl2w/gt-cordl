#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MatsAndGOs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MatsAndGOs_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MatAndTransformToMerged_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MatsAndGOs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MatsAndGOs::*)()>(&::DigitalOpus::MB::Core::MatsAndGOs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dce7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MatsAndGOs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MatAndTransformToMerged*>*& DigitalOpus::MB::Core::MatsAndGOs::__cordl_internal_get_mats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mats;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MatAndTransformToMerged*>* const& DigitalOpus::MB::Core::MatsAndGOs::__cordl_internal_get_mats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mats;
}
constexpr void DigitalOpus::MB::Core::MatsAndGOs::__cordl_internal_set_mats(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MatAndTransformToMerged*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mats = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& DigitalOpus::MB::Core::MatsAndGOs::__cordl_internal_get_gos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gos;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& DigitalOpus::MB::Core::MatsAndGOs::__cordl_internal_get_gos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gos;
}
constexpr void DigitalOpus::MB::Core::MatsAndGOs::__cordl_internal_set_gos(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gos = value;
}
inline void DigitalOpus::MB::Core::MatsAndGOs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MatsAndGOs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MatsAndGOs* DigitalOpus::MB::Core::MatsAndGOs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MatsAndGOs*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MatsAndGOs::MatsAndGOs()   {
}
