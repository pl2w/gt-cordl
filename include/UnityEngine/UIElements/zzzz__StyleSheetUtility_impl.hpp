#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheetUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheetUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_Unit_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_def.hpp"
#include "UnityEngine/UIElements/zzzz__AngleUnit_def.hpp"
#include "UnityEngine/UIElements/zzzz__Angle_def.hpp"
#include "UnityEngine/UIElements/zzzz__LengthUnit_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeUnit_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeValue_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ToDimension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Dimension (*)(::UnityEngine::UIElements::Length)>(&::UnityEngine::UIElements::StyleSheetUtility::ToDimension)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb791230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ToDimension", {}, {::i2c::type_of<::UnityEngine::UIElements::Length>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ToDimensionUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Dimension_Unit (*)(::UnityEngine::UIElements::LengthUnit)>(&::UnityEngine::UIElements::StyleSheetUtility::ToDimensionUnit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb791b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ToDimensionUnit", {}, {::i2c::type_of<::UnityEngine::UIElements::LengthUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ToDimension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Dimension (*)(::UnityEngine::UIElements::Angle)>(&::UnityEngine::UIElements::StyleSheetUtility::ToDimension)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb791418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ToDimension", {}, {::i2c::type_of<::UnityEngine::UIElements::Angle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ToDimensionUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Dimension_Unit (*)(::UnityEngine::UIElements::AngleUnit)>(&::UnityEngine::UIElements::StyleSheetUtility::ToDimensionUnit)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb791bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ToDimensionUnit", {}, {::i2c::type_of<::UnityEngine::UIElements::AngleUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ToDimension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Dimension (*)(::UnityEngine::UIElements::TimeValue)>(&::UnityEngine::UIElements::StyleSheetUtility::ToDimension)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb79159c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ToDimension", {}, {::i2c::type_of<::UnityEngine::UIElements::TimeValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ToDimensionUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Dimension_Unit (*)(::UnityEngine::UIElements::TimeUnit)>(&::UnityEngine::UIElements::StyleSheetUtility::ToDimensionUnit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb791c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ToDimensionUnit", {}, {::i2c::type_of<::UnityEngine::UIElements::TimeUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.GetEnumExportString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Enum*)>(&::UnityEngine::UIElements::StyleSheetUtility::GetEnumExportString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb78f81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"GetEnumExportString", {}, {::i2c::type_of<::System::Enum*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ConvertCamelToDash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::UIElements::StyleSheetUtility::ConvertCamelToDash)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb791cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ConvertCamelToDash", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ConvertDashToHungarian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::UIElements::StyleSheetUtility::ConvertDashToHungarian)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb791e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ConvertDashToHungarian", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ConvertDashToUpperNoSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, bool, bool)>(&::UnityEngine::UIElements::StyleSheetUtility::ConvertDashToUpperNoSpace)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xb791e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ConvertDashToUpperNoSpace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheetUtility::setStaticF_SpecialEnumToStringCases(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "SpecialEnumToStringCases", ::UnityEngine::UIElements::StyleSheetUtility*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* UnityEngine::UIElements::StyleSheetUtility::getStaticF_SpecialEnumToStringCases()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "SpecialEnumToStringCases", ::UnityEngine::UIElements::StyleSheetUtility*>();
}
inline void UnityEngine::UIElements::StyleSheetUtility::setStaticF_SpecialStringToEnumCases(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "SpecialStringToEnumCases", ::UnityEngine::UIElements::StyleSheetUtility*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* UnityEngine::UIElements::StyleSheetUtility::getStaticF_SpecialStringToEnumCases()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "SpecialStringToEnumCases", ::UnityEngine::UIElements::StyleSheetUtility*>();
}
inline ::UnityEngine::UIElements::StyleSheets::Dimension UnityEngine::UIElements::StyleSheetUtility::ToDimension(::UnityEngine::UIElements::Length  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ToDimension", {}, {::i2c::type_of<::UnityEngine::UIElements::Length>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Dimension>(nullptr, ___internal_method, length);
}
inline ::GlobalNamespace::Dimension_Unit UnityEngine::UIElements::StyleSheetUtility::ToDimensionUnit(::UnityEngine::UIElements::LengthUnit  unit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ToDimensionUnit", {}, {::i2c::type_of<::UnityEngine::UIElements::LengthUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Dimension_Unit>(nullptr, ___internal_method, unit);
}
inline ::UnityEngine::UIElements::StyleSheets::Dimension UnityEngine::UIElements::StyleSheetUtility::ToDimension(::UnityEngine::UIElements::Angle  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ToDimension", {}, {::i2c::type_of<::UnityEngine::UIElements::Angle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Dimension>(nullptr, ___internal_method, angle);
}
inline ::GlobalNamespace::Dimension_Unit UnityEngine::UIElements::StyleSheetUtility::ToDimensionUnit(::UnityEngine::UIElements::AngleUnit  unit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ToDimensionUnit", {}, {::i2c::type_of<::UnityEngine::UIElements::AngleUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Dimension_Unit>(nullptr, ___internal_method, unit);
}
inline ::UnityEngine::UIElements::StyleSheets::Dimension UnityEngine::UIElements::StyleSheetUtility::ToDimension(::UnityEngine::UIElements::TimeValue  timeValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ToDimension", {}, {::i2c::type_of<::UnityEngine::UIElements::TimeValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Dimension>(nullptr, ___internal_method, timeValue);
}
inline ::GlobalNamespace::Dimension_Unit UnityEngine::UIElements::StyleSheetUtility::ToDimensionUnit(::UnityEngine::UIElements::TimeUnit  unit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ToDimensionUnit", {}, {::i2c::type_of<::UnityEngine::UIElements::TimeUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Dimension_Unit>(nullptr, ___internal_method, unit);
}
inline ::StringW UnityEngine::UIElements::StyleSheetUtility::GetEnumExportString(::System::Enum*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"GetEnumExportString", {}, {::i2c::type_of<::System::Enum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::StyleSheetUtility::ConvertCamelToDash(::StringW  camel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ConvertCamelToDash", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, camel);
}
inline ::StringW UnityEngine::UIElements::StyleSheetUtility::ConvertDashToHungarian(::StringW  dash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ConvertDashToHungarian", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dash);
}
inline ::StringW UnityEngine::UIElements::StyleSheetUtility::ConvertDashToUpperNoSpace(::StringW  dash, bool  firstCase, bool  addSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                        {"ConvertDashToUpperNoSpace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dash, firstCase, addSpace);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheetUtility::StyleSheetUtility()   {
}
