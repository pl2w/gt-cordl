#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/VoiceServiceReference.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Utilities/zzzz__VoiceServiceReference_def.hpp"
#include "Meta/WitAi/Utilities/zzzz__VoiceServiceReference_def.hpp"
#include "Meta/WitAi/zzzz__VoiceService_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Utilities::VoiceServiceReference.get_VoiceService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::VoiceService> (::Meta::WitAi::Utilities::VoiceServiceReference::*)()>(&::Meta::WitAi::Utilities::VoiceServiceReference::get_VoiceService)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9e84ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::VoiceServiceReference>(),
                        {"get_VoiceService", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::Meta::WitAi::VoiceService> Meta::WitAi::Utilities::VoiceServiceReference::get_VoiceService()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::VoiceServiceReference>(),
                        {"get_VoiceService", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::VoiceService>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "voiceService", ty: "::UnityW<::Meta::WitAi::VoiceService>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::Utilities::VoiceServiceReference::VoiceServiceReference(::UnityW<::Meta::WitAi::VoiceService>  voiceService) noexcept  {
this->voiceService = voiceService;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Utilities::VoiceServiceReference::VoiceServiceReference()   {
}
//  Writing Method size for method: ::Meta::WitAi::Utilities::VoiceServiceReference___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Utilities::VoiceServiceReference___c::*)()>(&::Meta::WitAi::Utilities::VoiceServiceReference___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e85094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::VoiceServiceReference___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Utilities::VoiceServiceReference___c._get_VoiceService_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Utilities::VoiceServiceReference___c::*)(::Meta::WitAi::VoiceService*)>(&::Meta::WitAi::Utilities::VoiceServiceReference___c::_get_VoiceService_b__2_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e8509c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::VoiceServiceReference___c*>(),
                        {"<get_VoiceService>b__2_0", {}, {::i2c::type_of<::Meta::WitAi::VoiceService*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Utilities::VoiceServiceReference___c::setStaticF___9(::Meta::WitAi::Utilities::VoiceServiceReference___c*  value)  {
::cordl_internals::setStaticField<::Meta::WitAi::Utilities::VoiceServiceReference___c*, "<>9", ::Meta::WitAi::Utilities::VoiceServiceReference___c*>(std::forward<::Meta::WitAi::Utilities::VoiceServiceReference___c*>(value));
}
inline ::Meta::WitAi::Utilities::VoiceServiceReference___c* Meta::WitAi::Utilities::VoiceServiceReference___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::WitAi::Utilities::VoiceServiceReference___c*, "<>9", ::Meta::WitAi::Utilities::VoiceServiceReference___c*>();
}
inline void Meta::WitAi::Utilities::VoiceServiceReference___c::setStaticF___9__2_0(::System::Predicate_1<::UnityW<::Meta::WitAi::VoiceService>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::Meta::WitAi::VoiceService>>*, "<>9__2_0", ::Meta::WitAi::Utilities::VoiceServiceReference___c*>(std::forward<::System::Predicate_1<::UnityW<::Meta::WitAi::VoiceService>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::Meta::WitAi::VoiceService>>* Meta::WitAi::Utilities::VoiceServiceReference___c::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::Meta::WitAi::VoiceService>>*, "<>9__2_0", ::Meta::WitAi::Utilities::VoiceServiceReference___c*>();
}
inline void Meta::WitAi::Utilities::VoiceServiceReference___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::VoiceServiceReference___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::Utilities::VoiceServiceReference___c::_get_VoiceService_b__2_0(::Meta::WitAi::VoiceService*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::VoiceServiceReference___c*>(),
                        {"<get_VoiceService>b__2_0", {}, {::i2c::type_of<::Meta::WitAi::VoiceService*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline ::Meta::WitAi::Utilities::VoiceServiceReference___c* Meta::WitAi::Utilities::VoiceServiceReference___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Utilities::VoiceServiceReference___c*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Utilities::VoiceServiceReference___c::VoiceServiceReference___c()   {
}
