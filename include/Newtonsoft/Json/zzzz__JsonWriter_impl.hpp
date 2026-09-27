#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonWriter.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_State_impl.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PrimitiveTypeCode_def.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerType_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriterException_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_State_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__WriteState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.BuildStateArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>> (*)()>(&::Newtonsoft::Json::JsonWriter::BuildStateArray)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa38c1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"BuildStateArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_CloseOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_CloseOutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38c74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_CloseOutput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_CloseOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(bool)>(&::Newtonsoft::Json::JsonWriter::set_CloseOutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38c754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_CloseOutput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_AutoCompleteOnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_AutoCompleteOnClose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38c75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_AutoCompleteOnClose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_AutoCompleteOnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(bool)>(&::Newtonsoft::Json::JsonWriter::set_AutoCompleteOnClose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38c764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_AutoCompleteOnClose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_Top
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_Top)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa38a408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_Top", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_WriteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::WriteState (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_WriteState)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa38c774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_WriteState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_ContainerPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_ContainerPath)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa38c814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_ContainerPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_Path)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa38c8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_Path", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_Formatting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Formatting (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_Formatting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38c9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_Formatting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_Formatting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::Formatting)>(&::Newtonsoft::Json::JsonWriter::set_Formatting)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa38c9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_Formatting", {}, {::i2c::type_of<::Newtonsoft::Json::Formatting>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_DateFormatHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DateFormatHandling (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_DateFormatHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38ca1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_DateFormatHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_DateFormatHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::DateFormatHandling)>(&::Newtonsoft::Json::JsonWriter::set_DateFormatHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa38ca24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_DateFormatHandling", {}, {::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_DateTimeZoneHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DateTimeZoneHandling (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38ca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_DateTimeZoneHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_DateTimeZoneHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::DateTimeZoneHandling)>(&::Newtonsoft::Json::JsonWriter::set_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa38ca88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_DateTimeZoneHandling", {}, {::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_StringEscapeHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::StringEscapeHandling (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_StringEscapeHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38cae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_StringEscapeHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_StringEscapeHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::StringEscapeHandling)>(&::Newtonsoft::Json::JsonWriter::set_StringEscapeHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa38caec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_StringEscapeHandling", {}, {::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.OnStringEscapeHandlingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::OnStringEscapeHandlingChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa38cb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_FloatFormatHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::FloatFormatHandling (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_FloatFormatHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38cb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_FloatFormatHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_FloatFormatHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::FloatFormatHandling)>(&::Newtonsoft::Json::JsonWriter::set_FloatFormatHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa38cb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_FloatFormatHandling", {}, {::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_DateFormatString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_DateFormatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38cbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_DateFormatString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_DateFormatString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::set_DateFormatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38cbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_DateFormatString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_Culture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_Culture)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa38b5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_Culture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_Culture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Globalization::CultureInfo*)>(&::Newtonsoft::Json::JsonWriter::set_Culture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38cbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_Culture", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa389d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.UpdateScopeWithFinishedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::UpdateScopeWithFinishedValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa38cbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"UpdateScopeWithFinishedValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Push
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonWriter::Push)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa38cbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"Push", {}, {::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Pop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonContainerType (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::Pop)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa38cd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"Pop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Peek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonContainerType (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::Peek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38c76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"Peek", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa389dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteStartObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteStartObject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa38ce9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteEndObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38cea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteStartArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa38ceb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteEndArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38cec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteStartConstructor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteStartConstructor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa38cec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndConstructor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteEndConstructor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38ced4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WritePropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa38cedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WritePropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW, bool)>(&::Newtonsoft::Json::JsonWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa38cefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38cf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38cfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"WriteToken", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*, bool)>(&::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa38cff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"WriteToken", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Object*)>(&::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0xa38d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"WriteToken", {}, {::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*, bool, bool, bool)>(&::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa38d724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.IsWriteTokenIncomplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*, bool, int32_t)>(&::Newtonsoft::Json::JsonWriter::IsWriteTokenIncomplete)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa38da30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"IsWriteTokenIncomplete", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.CalculateWriteTokenInitialDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::JsonWriter::CalculateWriteTokenInitialDepth)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa38d904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"CalculateWriteTokenInitialDepth", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.CalculateWriteTokenFinalDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::JsonWriter::CalculateWriteTokenFinalDepth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa38da9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"CalculateWriteTokenFinalDepth", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteConstructorDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::JsonWriter::WriteConstructorDate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa38d968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"WriteConstructorDate", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonWriter::WriteEnd)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa38cf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"WriteEnd", {}, {::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.AutoCompleteAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::AutoCompleteAll)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa38ce5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"AutoCompleteAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.GetCloseTokenForType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonToken (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonWriter::GetCloseTokenForType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa38dafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"GetCloseTokenForType", {}, {::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.AutoCompleteClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonWriter::AutoCompleteClose)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa38db94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"AutoCompleteClose", {}, {::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.CalculateLevelsToComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonWriter::CalculateLevelsToComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa38dc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"CalculateLevelsToComplete", {}, {::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.UpdateCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::UpdateCurrentState)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa38dd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"UpdateCurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonWriter::WriteEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa38ddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteIndent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteIndent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa38ddf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueDelimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteValueDelimiter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa38ddf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteIndentSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteIndentSpace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa38ddfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.AutoComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonWriter::AutoComplete)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa38de00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"AutoComplete", {}, {::i2c::type_of<::Newtonsoft::Json::JsonToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteNull)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteUndefined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteUndefined)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa38e044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteRawValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteRawValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa38e048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(int32_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(uint32_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(int64_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(uint64_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(float_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(double_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(bool)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(int16_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(uint16_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(char16_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(uint8_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(int8_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Decimal)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::DateTime)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::DateTimeOffset)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Guid)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::TimeSpan)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa38e274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int32_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa38e290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint32_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa38e30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int64_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa38e388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint64_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa38e414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<float_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa38e4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<double_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa38e520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<bool>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa38e5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int16_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa38e630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint16_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa38e6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<char16_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa38e728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint8_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa38e7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int8_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa38e820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::Decimal>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa38e89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::DateTime>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa38e91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::DateTimeOffset>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa38e9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::Guid>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa38ea28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::TimeSpan>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa38eaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::ArrayW<uint8_t>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa38eb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Uri*)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa38eb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Object*)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa38a6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteComment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteComment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38fcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa38fcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(bool)>(&::Newtonsoft::Json::JsonWriter::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa38fd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode, ::System::Object*)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xf7c;
  constexpr static std::size_t addrs = 0xa38ed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"WriteValue", {}, {::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.ResolveConvertibleValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IConvertible*, ::by_ref<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>, ::by_ref<::System::Object*>)>(&::Newtonsoft::Json::JsonWriter::ResolveConvertibleValue)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa38fd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"ResolveConvertibleValue", {}, {::i2c::type_of<::System::IConvertible*>(), ::i2c::type_of<::by_ref<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.CreateUnsupportedTypeException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonWriterException* (*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*)>(&::Newtonsoft::Json::JsonWriter::CreateUnsupportedTypeException)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa38ec14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"CreateUnsupportedTypeException", {}, {::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.SetWriteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Object*)>(&::Newtonsoft::Json::JsonWriter::SetWriteState)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa38ffac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"SetWriteState", {}, {::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonWriter::InternalWriteEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa38ceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"InternalWriteEnd", {}, {::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWritePropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::InternalWritePropertyName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa38a134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"InternalWritePropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::InternalWriteRaw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa38a96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"InternalWriteRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonWriter::InternalWriteStart)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa389e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"InternalWriteStart", {}, {::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonWriter::InternalWriteValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa38a6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"InternalWriteValue", {}, {::i2c::type_of<::Newtonsoft::Json::JsonToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteComment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::InternalWriteComment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa38bfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"InternalWriteComment", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*& Newtonsoft::Json::JsonWriter::__cordl_internal_get__stack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stack;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__stack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stack;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stack = value;
}
constexpr ::Newtonsoft::Json::JsonPosition& Newtonsoft::Json::JsonWriter::__cordl_internal_get__currentPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPosition;
}
constexpr ::Newtonsoft::Json::JsonPosition const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__currentPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPosition;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__currentPosition(::Newtonsoft::Json::JsonPosition  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPosition = value;
}
constexpr ::GlobalNamespace::JsonWriter_State& Newtonsoft::Json::JsonWriter::__cordl_internal_get__currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr ::GlobalNamespace::JsonWriter_State const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__currentState(::GlobalNamespace::JsonWriter_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentState = value;
}
constexpr ::Newtonsoft::Json::Formatting& Newtonsoft::Json::JsonWriter::__cordl_internal_get__formatting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatting;
}
constexpr ::Newtonsoft::Json::Formatting const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__formatting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatting;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__formatting(::Newtonsoft::Json::Formatting  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____formatting = value;
}
constexpr bool& Newtonsoft::Json::JsonWriter::__cordl_internal_get__CloseOutput_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloseOutput_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__CloseOutput_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloseOutput_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__CloseOutput_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CloseOutput_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::JsonWriter::__cordl_internal_get__AutoCompleteOnClose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AutoCompleteOnClose_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__AutoCompleteOnClose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AutoCompleteOnClose_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__AutoCompleteOnClose_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AutoCompleteOnClose_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::DateFormatHandling& Newtonsoft::Json::JsonWriter::__cordl_internal_get__dateFormatHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatHandling;
}
constexpr ::Newtonsoft::Json::DateFormatHandling const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__dateFormatHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatHandling;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__dateFormatHandling(::Newtonsoft::Json::DateFormatHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateFormatHandling = value;
}
constexpr ::Newtonsoft::Json::DateTimeZoneHandling& Newtonsoft::Json::JsonWriter::__cordl_internal_get__dateTimeZoneHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateTimeZoneHandling;
}
constexpr ::Newtonsoft::Json::DateTimeZoneHandling const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__dateTimeZoneHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateTimeZoneHandling;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__dateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateTimeZoneHandling = value;
}
constexpr ::Newtonsoft::Json::StringEscapeHandling& Newtonsoft::Json::JsonWriter::__cordl_internal_get__stringEscapeHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringEscapeHandling;
}
constexpr ::Newtonsoft::Json::StringEscapeHandling const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__stringEscapeHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringEscapeHandling;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__stringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stringEscapeHandling = value;
}
constexpr ::Newtonsoft::Json::FloatFormatHandling& Newtonsoft::Json::JsonWriter::__cordl_internal_get__floatFormatHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatFormatHandling;
}
constexpr ::Newtonsoft::Json::FloatFormatHandling const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__floatFormatHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatFormatHandling;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__floatFormatHandling(::Newtonsoft::Json::FloatFormatHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____floatFormatHandling = value;
}
constexpr ::StringW& Newtonsoft::Json::JsonWriter::__cordl_internal_get__dateFormatString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatString;
}
constexpr ::StringW const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__dateFormatString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatString;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__dateFormatString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateFormatString = value;
}
constexpr ::System::Globalization::CultureInfo*& Newtonsoft::Json::JsonWriter::__cordl_internal_get__culture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____culture;
}
constexpr ::System::Globalization::CultureInfo* const& Newtonsoft::Json::JsonWriter::__cordl_internal_get__culture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____culture;
}
constexpr void Newtonsoft::Json::JsonWriter::__cordl_internal_set__culture(::System::Globalization::CultureInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____culture = value;
}
inline void Newtonsoft::Json::JsonWriter::setStaticF_StateArray(::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>>, "StateArray", ::Newtonsoft::Json::JsonWriter*>(std::forward<::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>>>(value));
}
inline ::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>> Newtonsoft::Json::JsonWriter::getStaticF_StateArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>>, "StateArray", ::Newtonsoft::Json::JsonWriter*>();
}
inline void Newtonsoft::Json::JsonWriter::setStaticF_StateArrayTemplate(::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>>, "StateArrayTemplate", ::Newtonsoft::Json::JsonWriter*>(std::forward<::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>>>(value));
}
inline ::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>> Newtonsoft::Json::JsonWriter::getStaticF_StateArrayTemplate()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>>, "StateArrayTemplate", ::Newtonsoft::Json::JsonWriter*>();
}
inline ::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>> Newtonsoft::Json::JsonWriter::BuildStateArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"BuildStateArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<::GlobalNamespace::JsonWriter_State>>>(nullptr, ___internal_method);
}
inline bool Newtonsoft::Json::JsonWriter::get_CloseOutput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_CloseOutput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_CloseOutput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_CloseOutput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonWriter::get_AutoCompleteOnClose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_AutoCompleteOnClose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_AutoCompleteOnClose(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_AutoCompleteOnClose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::JsonWriter::get_Top()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_Top", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Newtonsoft::Json::WriteState Newtonsoft::Json::JsonWriter::get_WriteState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_WriteState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::WriteState>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonWriter::get_ContainerPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_ContainerPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonWriter::get_Path()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_Path", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Formatting Newtonsoft::Json::JsonWriter::get_Formatting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_Formatting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Formatting>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_Formatting(::Newtonsoft::Json::Formatting  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_Formatting", {}, {::i2c::type_of<::Newtonsoft::Json::Formatting>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateFormatHandling Newtonsoft::Json::JsonWriter::get_DateFormatHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_DateFormatHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateFormatHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_DateFormatHandling", {}, {::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateTimeZoneHandling Newtonsoft::Json::JsonWriter::get_DateTimeZoneHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_DateTimeZoneHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateTimeZoneHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_DateTimeZoneHandling", {}, {::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::StringEscapeHandling Newtonsoft::Json::JsonWriter::get_StringEscapeHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_StringEscapeHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::StringEscapeHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_StringEscapeHandling", {}, {::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::OnStringEscapeHandlingChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::FloatFormatHandling Newtonsoft::Json::JsonWriter::get_FloatFormatHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_FloatFormatHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::FloatFormatHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_FloatFormatHandling", {}, {::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonWriter::get_DateFormatString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_DateFormatString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_DateFormatString(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_DateFormatString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Globalization::CultureInfo* Newtonsoft::Json::JsonWriter::get_Culture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"get_Culture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_Culture(::System::Globalization::CultureInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"set_Culture", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::UpdateScopeWithFinishedValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"UpdateScopeWithFinishedValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::Push(::Newtonsoft::Json::JsonContainerType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"Push", {}, {::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonContainerType Newtonsoft::Json::JsonWriter::Pop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"Pop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonContainerType>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonContainerType Newtonsoft::Json::JsonWriter::Peek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"Peek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonContainerType>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteStartObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteEndObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteStartArray()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteEndArray()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteStartConstructor(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonWriter::WriteEndConstructor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WritePropertyName(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonWriter::WritePropertyName(::StringW  name, bool  escape)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, escape);
}
inline void Newtonsoft::Json::JsonWriter::WriteEnd()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"WriteToken", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonReader*  reader, bool  writeChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"WriteToken", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, writeChildren);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonToken  token, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"WriteToken", {}, {::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonReader*  reader, bool  writeChildren, bool  writeDateConstructorAsDate, bool  writeComments)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, writeChildren, writeDateConstructorAsDate, writeComments);
}
inline bool Newtonsoft::Json::JsonWriter::IsWriteTokenIncomplete(::Newtonsoft::Json::JsonReader*  reader, bool  writeChildren, int32_t  initialDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"IsWriteTokenIncomplete", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, writeChildren, initialDepth);
}
inline int32_t Newtonsoft::Json::JsonWriter::CalculateWriteTokenInitialDepth(::Newtonsoft::Json::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"CalculateWriteTokenInitialDepth", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader);
}
inline int32_t Newtonsoft::Json::JsonWriter::CalculateWriteTokenFinalDepth(::Newtonsoft::Json::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"CalculateWriteTokenFinalDepth", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader);
}
inline void Newtonsoft::Json::JsonWriter::WriteConstructorDate(::Newtonsoft::Json::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"WriteConstructorDate", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void Newtonsoft::Json::JsonWriter::WriteEnd(::Newtonsoft::Json::JsonContainerType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"WriteEnd", {}, {::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Newtonsoft::Json::JsonWriter::AutoCompleteAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"AutoCompleteAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonToken Newtonsoft::Json::JsonWriter::GetCloseTokenForType(::Newtonsoft::Json::JsonContainerType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"GetCloseTokenForType", {}, {::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonToken>(this, ___internal_method, type);
}
inline void Newtonsoft::Json::JsonWriter::AutoCompleteClose(::Newtonsoft::Json::JsonContainerType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"AutoCompleteClose", {}, {::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline int32_t Newtonsoft::Json::JsonWriter::CalculateLevelsToComplete(::Newtonsoft::Json::JsonContainerType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"CalculateLevelsToComplete", {}, {::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline void Newtonsoft::Json::JsonWriter::UpdateCurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"UpdateCurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteEnd(::Newtonsoft::Json::JsonToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::JsonWriter::WriteIndent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteValueDelimiter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteIndentSpace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::AutoComplete(::Newtonsoft::Json::JsonToken  tokenBeingWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"AutoComplete", {}, {::i2c::type_of<::Newtonsoft::Json::JsonToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tokenBeingWritten);
}
inline void Newtonsoft::Json::JsonWriter::WriteNull()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteUndefined()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteRaw(::StringW  json)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::JsonWriter::WriteRawValue(::StringW  json)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(uint32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(uint64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(int16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(uint16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(char16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(int8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Decimal  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::DateTime  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::DateTimeOffset  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Guid  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::TimeSpan  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<int32_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<uint32_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<int64_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<uint64_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<float_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<double_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<bool>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<int16_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<uint16_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<char16_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<uint8_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<int8_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::Decimal>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::DateTime>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::DateTimeOffset>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::Guid>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::TimeSpan>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::ArrayW<uint8_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Uri*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteComment(::StringW  text)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Newtonsoft::Json::JsonWriter::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  typeCode, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"WriteValue", {}, {::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, typeCode, value);
}
inline void Newtonsoft::Json::JsonWriter::ResolveConvertibleValue(::System::IConvertible*  convertible, ::by_ref<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>  typeCode, ::by_ref<::System::Object*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"ResolveConvertibleValue", {}, {::i2c::type_of<::System::IConvertible*>(), ::i2c::type_of<::by_ref<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, convertible, typeCode, value);
}
inline ::Newtonsoft::Json::JsonWriterException* Newtonsoft::Json::JsonWriter::CreateUnsupportedTypeException(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"CreateUnsupportedTypeException", {}, {::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonWriterException*>(nullptr, ___internal_method, writer, value);
}
inline void Newtonsoft::Json::JsonWriter::SetWriteState(::Newtonsoft::Json::JsonToken  token, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"SetWriteState", {}, {::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, value);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteEnd(::Newtonsoft::Json::JsonContainerType  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"InternalWriteEnd", {}, {::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Newtonsoft::Json::JsonWriter::InternalWritePropertyName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"InternalWritePropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"InternalWriteRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteStart(::Newtonsoft::Json::JsonToken  token, ::Newtonsoft::Json::JsonContainerType  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"InternalWriteStart", {}, {::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, container);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteValue(::Newtonsoft::Json::JsonToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"InternalWriteValue", {}, {::i2c::type_of<::Newtonsoft::Json::JsonToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteComment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriter*>(),
                        {"InternalWriteComment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonWriter* Newtonsoft::Json::JsonWriter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonWriter*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Newtonsoft::Json::JsonWriter::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Newtonsoft::Json::JsonWriter::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriter::JsonWriter()   {
}
