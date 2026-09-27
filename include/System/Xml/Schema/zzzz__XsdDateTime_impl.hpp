#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDateTime.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/Xml/Schema/zzzz__XsdDateTime_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__XsdDateTimeFlags_def.hpp"
#include "System/Xml/Schema/zzzz__XsdDateTime_DateTimeTypeCode_def.hpp"
#include "System/Xml/Schema/zzzz__XsdDateTime_Parser_def.hpp"
#include "System/Xml/Schema/zzzz__XsdDateTime_XsdDateTimeKind_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::StringW, ::System::Xml::Schema::XsdDateTimeFlags)>(&::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xab7d98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XsdDateTimeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::GlobalNamespace::XsdDateTime_Parser)>(&::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xab7e704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::XsdDateTime_Parser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.InitiateXsdDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::GlobalNamespace::XsdDateTime_Parser)>(&::System::Xml::Schema::XsdDateTime::InitiateXsdDateTime)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xab7e648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"InitiateXsdDateTime", {}, {::i2c::type_of<::GlobalNamespace::XsdDateTime_Parser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Xml::Schema::XsdDateTimeFlags, ::by_ref<::System::Xml::Schema::XsdDateTime>)>(&::System::Xml::Schema::XsdDateTime::TryParse)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xab7e788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XsdDateTimeFlags>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XsdDateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::DateTime, ::System::Xml::Schema::XsdDateTimeFlags)>(&::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xab7e848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Xml::Schema::XsdDateTimeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xab7ea1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::DateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags)>(&::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xab7ea8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::Xml::Schema::XsdDateTimeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_InternalTypeCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XsdDateTime_DateTimeTypeCode (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_InternalTypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xab7ec20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_InternalTypeCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_InternalKind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XsdDateTime_XsdDateTimeKind (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_InternalKind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xab7ec28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_InternalKind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Year
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Year)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xab7ec30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Year", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Month
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Month)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xab7ec88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Month", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Day
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Day)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xab7ece0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Day", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Hour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Hour)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xab7ed38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Hour", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Minute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Minute)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xab7ed90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Minute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Second
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Second)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xab7ede8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Second", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Fraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Fraction)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xab7ee40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Fraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_ZoneHour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_ZoneHour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xab7ef58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_ZoneHour", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_ZoneMinute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_ZoneMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xab7ef60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_ZoneMinute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.op_Implicit___System__DateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::Xml::Schema::XsdDateTime)>(&::System::Xml::Schema::XsdDateTime::op_Implicit___System__DateTime)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0xab7ef68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Xml::Schema::XsdDateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.op_Implicit___System__DateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::System::Xml::Schema::XsdDateTime)>(&::System::Xml::Schema::XsdDateTime::op_Implicit___System__DateTimeOffset)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xab7f484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Xml::Schema::XsdDateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::ToString)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0xab7f7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                    {::i2c::class_of<::System::Xml::Schema::XsdDateTime>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.PrintDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::Text::StringBuilder*)>(&::System::Xml::Schema::XsdDateTime::PrintDate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xab7fc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"PrintDate", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.PrintTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::Text::StringBuilder*)>(&::System::Xml::Schema::XsdDateTime::PrintTime)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xab7fd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"PrintTime", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.PrintZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::Text::StringBuilder*)>(&::System::Xml::Schema::XsdDateTime::PrintZone)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xab800a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"PrintZone", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.IntToCharArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::ArrayW<char16_t>, int32_t, int32_t, int32_t)>(&::System::Xml::Schema::XsdDateTime::IntToCharArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xab7ffd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"IntToCharArray", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.ShortToCharArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::Schema::XsdDateTime::ShortToCharArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xab80040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"ShortToCharArray", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lzyyyy(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lzyyyy", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lzyyyy()  {
return ::cordl_internals::getStaticField<int32_t, "Lzyyyy", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lzyyyy_(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lzyyyy_", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lzyyyy_()  {
return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lzyyyy_MM(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lzyyyy_MM()  {
return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lzyyyy_MM_(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM_", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lzyyyy_MM_()  {
return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM_", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lzyyyy_MM_dd(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM_dd", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lzyyyy_MM_dd()  {
return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM_dd", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lzyyyy_MM_ddT(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM_ddT", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lzyyyy_MM_ddT()  {
return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM_ddT", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_LzHH(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "LzHH", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_LzHH()  {
return ::cordl_internals::getStaticField<int32_t, "LzHH", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_LzHH_(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "LzHH_", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_LzHH_()  {
return ::cordl_internals::getStaticField<int32_t, "LzHH_", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_LzHH_mm(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "LzHH_mm", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_LzHH_mm()  {
return ::cordl_internals::getStaticField<int32_t, "LzHH_mm", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_LzHH_mm_(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "LzHH_mm_", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_LzHH_mm_()  {
return ::cordl_internals::getStaticField<int32_t, "LzHH_mm_", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_LzHH_mm_ss(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "LzHH_mm_ss", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_LzHH_mm_ss()  {
return ::cordl_internals::getStaticField<int32_t, "LzHH_mm_ss", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz_(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lz_", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz_()  {
return ::cordl_internals::getStaticField<int32_t, "Lz_", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz_zz(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lz_zz", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz_zz()  {
return ::cordl_internals::getStaticField<int32_t, "Lz_zz", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz_zz_(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lz_zz_", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz_zz_()  {
return ::cordl_internals::getStaticField<int32_t, "Lz_zz_", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz_zz_zz(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lz_zz_zz", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz_zz_zz()  {
return ::cordl_internals::getStaticField<int32_t, "Lz_zz_zz", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz__(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lz__", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz__()  {
return ::cordl_internals::getStaticField<int32_t, "Lz__", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz__mm(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lz__mm", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz__mm()  {
return ::cordl_internals::getStaticField<int32_t, "Lz__mm", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz__mm_(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lz__mm_", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz__mm_()  {
return ::cordl_internals::getStaticField<int32_t, "Lz__mm_", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz__mm__(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lz__mm__", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz__mm__()  {
return ::cordl_internals::getStaticField<int32_t, "Lz__mm__", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz__mm_dd(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lz__mm_dd", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz__mm_dd()  {
return ::cordl_internals::getStaticField<int32_t, "Lz__mm_dd", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz___(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lz___", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz___()  {
return ::cordl_internals::getStaticField<int32_t, "Lz___", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_Lz___dd(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Lz___dd", ::System::Xml::Schema::XsdDateTime>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XsdDateTime::getStaticF_Lz___dd()  {
return ::cordl_internals::getStaticField<int32_t, "Lz___dd", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::setStaticF_typeCodes(::ArrayW<::System::Xml::Schema::XmlTypeCode>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XmlTypeCode>, "typeCodes", ::System::Xml::Schema::XsdDateTime>(std::forward<::ArrayW<::System::Xml::Schema::XmlTypeCode>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XmlTypeCode> System::Xml::Schema::XsdDateTime::getStaticF_typeCodes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XmlTypeCode>, "typeCodes", ::System::Xml::Schema::XsdDateTime>();
}
inline void System::Xml::Schema::XsdDateTime::_ctor(::StringW  text, ::System::Xml::Schema::XsdDateTimeFlags  kinds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XsdDateTimeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, kinds);
}
inline void System::Xml::Schema::XsdDateTime::_ctor(::GlobalNamespace::XsdDateTime_Parser  parser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::XsdDateTime_Parser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, parser);
}
inline void System::Xml::Schema::XsdDateTime::InitiateXsdDateTime(::GlobalNamespace::XsdDateTime_Parser  parser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"InitiateXsdDateTime", {}, {::i2c::type_of<::GlobalNamespace::XsdDateTime_Parser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, parser);
}
inline bool System::Xml::Schema::XsdDateTime::TryParse(::StringW  text, ::System::Xml::Schema::XsdDateTimeFlags  kinds, ::by_ref<::System::Xml::Schema::XsdDateTime>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XsdDateTimeFlags>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XsdDateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, kinds, result);
}
inline void System::Xml::Schema::XsdDateTime::_ctor(::System::DateTime  dateTime, ::System::Xml::Schema::XsdDateTimeFlags  kinds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Xml::Schema::XsdDateTimeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dateTime, kinds);
}
inline void System::Xml::Schema::XsdDateTime::_ctor(::System::DateTimeOffset  dateTimeOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dateTimeOffset);
}
inline void System::Xml::Schema::XsdDateTime::_ctor(::System::DateTimeOffset  dateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags  kinds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::Xml::Schema::XsdDateTimeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dateTimeOffset, kinds);
}
inline ::GlobalNamespace::XsdDateTime_DateTimeTypeCode System::Xml::Schema::XsdDateTime::get_InternalTypeCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_InternalTypeCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XsdDateTime_DateTimeTypeCode>(*this, ___internal_method);
}
inline ::GlobalNamespace::XsdDateTime_XsdDateTimeKind System::Xml::Schema::XsdDateTime::get_InternalKind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_InternalKind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XsdDateTime_XsdDateTimeKind>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Year()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Year", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Month()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Month", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Day()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Day", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Hour()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Hour", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Minute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Minute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Second()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Second", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_Fraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_Fraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_ZoneHour()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_ZoneHour", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDateTime::get_ZoneMinute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"get_ZoneMinute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::DateTime System::Xml::Schema::XsdDateTime::op_Implicit___System__DateTime(::System::Xml::Schema::XsdDateTime  xdt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Xml::Schema::XsdDateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, xdt);
}
inline ::System::DateTimeOffset System::Xml::Schema::XsdDateTime::op_Implicit___System__DateTimeOffset(::System::Xml::Schema::XsdDateTime  xdt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Xml::Schema::XsdDateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, xdt);
}
inline ::StringW System::Xml::Schema::XsdDateTime::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Schema::XsdDateTime>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void System::Xml::Schema::XsdDateTime::PrintDate(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"PrintDate", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sb);
}
inline void System::Xml::Schema::XsdDateTime::PrintTime(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"PrintTime", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sb);
}
inline void System::Xml::Schema::XsdDateTime::PrintZone(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"PrintZone", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sb);
}
inline void System::Xml::Schema::XsdDateTime::IntToCharArray(::ArrayW<char16_t>  text, int32_t  start, int32_t  value, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"IntToCharArray", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, start, value, digits);
}
inline void System::Xml::Schema::XsdDateTime::ShortToCharArray(::ArrayW<char16_t>  text, int32_t  start, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Schema::XsdDateTime>(),
                        {"ShortToCharArray", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, start, value);
}
// Ctor Parameters [CppParam { name: "dt", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "extra", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Xml::Schema::XsdDateTime::XsdDateTime(::System::DateTime  dt, uint32_t  extra) noexcept  {
this->dt = dt;
this->extra = extra;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdDateTime::XsdDateTime()   {
}
