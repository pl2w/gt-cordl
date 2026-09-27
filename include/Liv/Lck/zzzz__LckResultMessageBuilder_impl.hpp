#pragma once
// IWYU pragma private; include "Liv/Lck/LckResultMessageBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckResultMessageBuilder_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "Liv/Lck/zzzz__ILckMonitor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckResultMessageBuilder.BuildCameraIdNotFoundMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Collections::Generic::List_1<::Liv::Lck::ILckCamera*>*)>(&::Liv::Lck::LckResultMessageBuilder::BuildCameraIdNotFoundMessage)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9cea864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResultMessageBuilder*>(),
                        {"BuildCameraIdNotFoundMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckResultMessageBuilder.BuildMonitorIdNotFoundMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Collections::Generic::List_1<::Liv::Lck::ILckMonitor*>*)>(&::Liv::Lck::LckResultMessageBuilder::BuildMonitorIdNotFoundMessage)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9ceafb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResultMessageBuilder*>(),
                        {"BuildMonitorIdNotFoundMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Liv::Lck::ILckMonitor*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Liv::Lck::LckResultMessageBuilder::BuildCameraIdNotFoundMessage(::StringW  missingCameraId, ::System::Collections::Generic::List_1<::Liv::Lck::ILckCamera*>*  existingCameras)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResultMessageBuilder*>(),
                        {"BuildCameraIdNotFoundMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, missingCameraId, existingCameras);
}
inline ::StringW Liv::Lck::LckResultMessageBuilder::BuildMonitorIdNotFoundMessage(::StringW  missingMonitorId, ::System::Collections::Generic::List_1<::Liv::Lck::ILckMonitor*>*  existingMonitors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResultMessageBuilder*>(),
                        {"BuildMonitorIdNotFoundMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Liv::Lck::ILckMonitor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, missingMonitorId, existingMonitors);
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckResultMessageBuilder::LckResultMessageBuilder()   {
}
