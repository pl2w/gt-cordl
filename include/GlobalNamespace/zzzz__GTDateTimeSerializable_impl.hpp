#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDateTimeSerializable.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "GlobalNamespace/zzzz__GTDateTimeSerializable_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTDateTimeSerializable.get_dateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::GTDateTimeSerializable::*)()>(&::GlobalNamespace::GTDateTimeSerializable::get_dateTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566d80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {"get_dateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDateTimeSerializable.set_dateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDateTimeSerializable::*)(::System::DateTime)>(&::GlobalNamespace::GTDateTimeSerializable::set_dateTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x566d814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {"set_dateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDateTimeSerializable.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDateTimeSerializable::*)()>(&::GlobalNamespace::GTDateTimeSerializable::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x566d8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDateTimeSerializable.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDateTimeSerializable::*)()>(&::GlobalNamespace::GTDateTimeSerializable::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x566d8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDateTimeSerializable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDateTimeSerializable::*)(int32_t)>(&::GlobalNamespace::GTDateTimeSerializable::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x566dafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDateTimeSerializable.FormatDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::GlobalNamespace::GTDateTimeSerializable::FormatDateTime)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x566d83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {"FormatDateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDateTimeSerializable.TryParseDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::DateTime>)>(&::GlobalNamespace::GTDateTimeSerializable::TryParseDateTime)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x566d908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {"TryParseDateTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::DateTime GlobalNamespace::GTDateTimeSerializable::get_dateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {"get_dateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline void GlobalNamespace::GTDateTimeSerializable::set_dateTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {"set_dateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GTDateTimeSerializable::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GTDateTimeSerializable::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GTDateTimeSerializable::_ctor(int32_t  dummyValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dummyValue);
}
inline ::StringW GlobalNamespace::GTDateTimeSerializable::FormatDateTime(::System::DateTime  dateTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {"FormatDateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dateTime);
}
inline bool GlobalNamespace::GTDateTimeSerializable::TryParseDateTime(::StringW  value, ::by_ref<::System::DateTime>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDateTimeSerializable>(),
                        {"TryParseDateTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, result);
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  GlobalNamespace::GTDateTimeSerializable::operator ::UnityEngine::ISerializationCallbackReceiver*()  {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* GlobalNamespace::GTDateTimeSerializable::i___UnityEngine__ISerializationCallbackReceiver()  {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_dateTimeString", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_dateTime", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTDateTimeSerializable::GTDateTimeSerializable(::StringW  _dateTimeString, ::System::DateTime  _dateTime) noexcept  {
this->_dateTimeString = _dateTimeString;
this->_dateTime = _dateTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTDateTimeSerializable::GTDateTimeSerializable()   {
}
