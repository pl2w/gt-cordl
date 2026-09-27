#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Formatting/FormatDetails.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormatDetails_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormatCache_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormattingException_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Output/zzzz__IOutput_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Settings/zzzz__SmartSettings_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)(::UnityEngine::Localization::SmartFormat::SmartFormatter*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*, ::System::Collections::Generic::IList_1<::System::Object*>*, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*, ::System::IFormatProvider*, ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*)>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::Init)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb048644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::Clear)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb0486d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.get_Formatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::SmartFormatter* (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_Formatter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04874c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_Formatter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.set_Formatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)(::UnityEngine::Localization::SmartFormat::SmartFormatter*)>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_Formatter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_Formatter", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.get_OriginalFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_OriginalFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04875c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_OriginalFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.set_OriginalFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*)>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_OriginalFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_OriginalFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.get_OriginalArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Object*>* (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_OriginalArgs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04876c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_OriginalArgs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.set_OriginalArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)(::System::Collections::Generic::IList_1<::System::Object*>*)>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_OriginalArgs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_OriginalArgs", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.get_FormatCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_FormatCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04877c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_FormatCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.set_FormatCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*)>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_FormatCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_FormatCache", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.get_Provider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IFormatProvider* (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_Provider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04878c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_Provider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.set_Provider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)(::System::IFormatProvider*)>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_Provider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_Provider", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.get_Output
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput* (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_Output)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04879c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_Output", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.set_Output
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)(::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*)>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_Output)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0487a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_Output", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.get_FormattingException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException* (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_FormattingException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0487ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_FormattingException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.set_FormattingException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*)>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_FormattingException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0487b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_FormattingException", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_Settings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb0487bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0487d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter*& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__Formatter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Formatter_k__BackingField;
}
constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter* const& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__Formatter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Formatter_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_set__Formatter_k__BackingField(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Formatter_k__BackingField = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__OriginalFormat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OriginalFormat_k__BackingField;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__OriginalFormat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OriginalFormat_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_set__OriginalFormat_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OriginalFormat_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IList_1<::System::Object*>*& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__OriginalArgs_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OriginalArgs_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::System::Object*>* const& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__OriginalArgs_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OriginalArgs_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_set__OriginalArgs_k__BackingField(::System::Collections::Generic::IList_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OriginalArgs_k__BackingField = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__FormatCache_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormatCache_k__BackingField;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* const& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__FormatCache_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormatCache_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_set__FormatCache_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FormatCache_k__BackingField = value;
}
constexpr ::System::IFormatProvider*& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__Provider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Provider_k__BackingField;
}
constexpr ::System::IFormatProvider* const& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__Provider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Provider_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_set__Provider_k__BackingField(::System::IFormatProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Provider_k__BackingField = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__Output_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Output_k__BackingField;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput* const& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__Output_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Output_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_set__Output_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Output_k__BackingField = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__FormattingException_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormattingException_k__BackingField;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException* const& UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_get__FormattingException_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormattingException_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::__cordl_internal_set__FormattingException_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FormattingException_k__BackingField = value;
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::Init(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  originalFormat, ::System::Collections::Generic::IList_1<::System::Object*>*  originalArgs, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  formatCache, ::System::IFormatProvider*  provider, ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatter, originalFormat, originalArgs, formatCache, provider, output);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::SmartFormatter* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_Formatter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_Formatter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_Formatter(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_Formatter", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_OriginalFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_OriginalFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_OriginalFormat(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_OriginalFormat", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::System::Object*>* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_OriginalArgs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_OriginalArgs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Object*>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_OriginalArgs(::System::Collections::Generic::IList_1<::System::Object*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_OriginalArgs", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_FormatCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_FormatCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_FormatCache(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_FormatCache", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IFormatProvider* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_Provider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_Provider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IFormatProvider*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_Provider(::System::IFormatProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_Provider", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_Output()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_Output", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_Output(::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_Output", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_FormattingException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_FormattingException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::set_FormattingException(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"set_FormattingException", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails* UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails::FormatDetails()   {
}
