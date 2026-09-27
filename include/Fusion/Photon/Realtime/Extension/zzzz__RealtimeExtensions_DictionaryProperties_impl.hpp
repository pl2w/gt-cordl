#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Extension/RealtimeExtensions_DictionaryProperties.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/Extension/zzzz__RealtimeExtensions_DictionaryProperties_def.hpp"
#include "Fusion/zzzz__SessionProperty_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Extension::RealtimeExtensions_DictionaryProperties.CalculateTotalSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*)>(&::Fusion::Photon::Realtime::Extension::RealtimeExtensions_DictionaryProperties::CalculateTotalSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f690b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Extension::RealtimeExtensions_DictionaryProperties*>(),
                        {"CalculateTotalSize", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::Photon::Realtime::Extension::RealtimeExtensions_DictionaryProperties::CalculateTotalSize(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  dictionary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Extension::RealtimeExtensions_DictionaryProperties*>(),
                        {"CalculateTotalSize", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dictionary);
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Extension::RealtimeExtensions_DictionaryProperties::RealtimeExtensions_DictionaryProperties()   {
}
