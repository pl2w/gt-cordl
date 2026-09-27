#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Utilities/TimeSpanFormatOptionsConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeSpanFormatOptions_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeSpanFormatOptionsConverter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeSpanFormatOptionsConverter_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeSpanFormatOptions_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter.Merge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions (*)(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions, ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions)>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter::Merge)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb035c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter*>(),
                        {"Merge", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter.Mask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions (*)(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions, ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions)>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter::Mask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb035d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter*>(),
                        {"Mask", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter.AllFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>* (*)(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions)>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter::AllFlags)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb035d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter*>(),
                        {"AllFlags", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions (*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter::Parse)> {
  constexpr static std::size_t size = 0x9f0;
  constexpr static std::size_t addrs = 0xb036058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter::setStaticF_parser(::System::Text::RegularExpressions::Regex*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "parser", ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter*>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter::getStaticF_parser()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "parser", ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter*>();
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter::Merge(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  left, ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter*>(),
                        {"Merge", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter::Mask(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  timeSpanFormatOptions, ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter*>(),
                        {"Mask", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(nullptr, ___internal_method, timeSpanFormatOptions, mask);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>* UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter::AllFlags(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  timeSpanFormatOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter*>(),
                        {"AllFlags", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>*>(nullptr, ___internal_method, timeSpanFormatOptions);
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter::Parse(::StringW  formatOptionsString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(nullptr, ___internal_method, formatOptionsString);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter::TimeSpanFormatOptionsConverter()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::*)(int32_t)>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb036024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb036ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb036aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3.System_Collections_Generic_IEnumerator_UnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptions__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions (::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::System_Collections_Generic_IEnumerator_UnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptions__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb036b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb036b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb036b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3.System_Collections_Generic_IEnumerable_UnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptions__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>* (::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::System_Collections_Generic_IEnumerable_UnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptions__GetEnumerator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb036bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb036c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions& UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const& UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_set___2__current(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions& UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_get_timeSpanFormatOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSpanFormatOptions;
}
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const& UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_get_timeSpanFormatOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSpanFormatOptions;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_set_timeSpanFormatOptions(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSpanFormatOptions = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions& UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_get___3__timeSpanFormatOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__timeSpanFormatOptions;
}
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const& UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_get___3__timeSpanFormatOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__timeSpanFormatOptions;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_set___3__timeSpanFormatOptions(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__timeSpanFormatOptions = value;
}
constexpr uint32_t& UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_get__value_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_5__2;
}
constexpr uint32_t const& UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_get__value_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_5__2;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::__cordl_internal_set__value_5__2(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value_5__2 = value;
}
inline void UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::System_Collections_Generic_IEnumerator_UnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptions__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>* UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::System_Collections_Generic_IEnumerable_UnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptions__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3* UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>"
constexpr  UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>* UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Localization__SmartFormat__Utilities__TimeSpanFormatOptions_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>"
constexpr  UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>* UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::i___System__Collections__Generic__IEnumerator_1___UnityEngine__Localization__SmartFormat__Utilities__TimeSpanFormatOptions_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3::TimeSpanFormatOptionsConverter__AllFlags_d__3()   {
}
