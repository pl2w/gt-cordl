#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioJsonDecodeDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioJsonDecodeDelegate_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9e6df98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate::*)(::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*)>(&::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e6e0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate::Invoke(::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  jsonNode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonNode);
}
inline ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate* Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate::AudioJsonDecodeDelegate()   {
}
