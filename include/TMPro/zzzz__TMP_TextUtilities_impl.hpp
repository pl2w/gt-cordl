#pragma once
// IWYU pragma private; include "TMPro/TMP_TextUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "TMPro/zzzz__TMP_TextUtilities_def.hpp"
#include "TMPro/zzzz__CaretPosition_def.hpp"
#include "TMPro/zzzz__TMP_TextUtilities_LineSegment_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetCursorIndexFromPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::GetCursorIndexFromPosition)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb3a9c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"GetCursorIndexFromPosition", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetCursorIndexFromPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::by_ref<::TMPro::CaretPosition>)>(&::TMPro::TMP_TextUtilities::GetCursorIndexFromPosition)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xb3aa3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"GetCursorIndexFromPosition", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::TMPro::CaretPosition>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::FindNearestLine)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb3aa608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindNearestLine", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestCharacterOnLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, int32_t, ::UnityEngine::Camera*, bool)>(&::TMPro::TMP_TextUtilities::FindNearestCharacterOnLine)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xb3aa7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindNearestCharacterOnLine", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.IsIntersectingRectTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::IsIntersectingRectTransform)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb3aae64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"IsIntersectingRectTransform", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindIntersectingCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, bool)>(&::TMPro::TMP_TextUtilities::FindIntersectingCharacter)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xb3aaf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindIntersectingCharacter", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, bool)>(&::TMPro::TMP_TextUtilities::FindNearestCharacter)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xb3a9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindNearestCharacter", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindIntersectingWord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::FindIntersectingWord)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0xb3ab1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindIntersectingWord", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestWord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::FindNearestWord)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0xb3ab674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindNearestWord", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindIntersectingLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::FindIntersectingLine)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb3abd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindIntersectingLine", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindIntersectingLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::FindIntersectingLink)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xb3abf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindIntersectingLink", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.FindNearestLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*)>(&::TMPro::TMP_TextUtilities::FindNearestLink)> {
  constexpr static std::size_t size = 0x768;
  constexpr static std::size_t addrs = 0xb3ac294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindNearestLink", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.PointIntersectRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::TMPro::TMP_TextUtilities::PointIntersectRectangle)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb3aab84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"PointIntersectRectangle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.ScreenPointToWorldPointInRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::by_ref<::UnityEngine::Vector3>)>(&::TMPro::TMP_TextUtilities::ScreenPointToWorldPointInRectangle)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0xb3aa0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"ScreenPointToWorldPointInRectangle", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.IntersectLinePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::TMP_TextUtilities_LineSegment, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(&::TMPro::TMP_TextUtilities::IntersectLinePlane)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb3ac9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"IntersectLinePlane", {}, {::i2c::type_of<::GlobalNamespace::TMP_TextUtilities_LineSegment>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.DistanceToLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::TMPro::TMP_TextUtilities::DistanceToLine)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb3aad48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"DistanceToLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.ToLowerFast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::TMPro::TMP_TextUtilities::ToLowerFast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb3acb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"ToLowerFast", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.ToUpperFast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::TMPro::TMP_TextUtilities::ToUpperFast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb3acbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"ToUpperFast", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.ToUpperASCIIFast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::TMPro::TMP_TextUtilities::ToUpperASCIIFast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb3acc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"ToUpperASCIIFast", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::GetHashCode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb3accc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetSimpleHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::GetSimpleHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb3acd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"GetSimpleHashCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetSimpleHashCodeLowercase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::GetSimpleHashCodeLowercase)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb3acdfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"GetSimpleHashCodeLowercase", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.GetHashCodeCaseInSensitive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::GetHashCodeCaseInSensitive)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb3aceb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"GetHashCodeCaseInSensitive", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.HexToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t)>(&::TMPro::TMP_TextUtilities::HexToInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb3acf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"HexToInt", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextUtilities.StringHexToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::TMPro::TMP_TextUtilities::StringHexToInt)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb3acfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"StringHexToInt", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void TMPro::TMP_TextUtilities::setStaticF_m_rectWorldCorners(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "m_rectWorldCorners", ::TMPro::TMP_TextUtilities*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> TMPro::TMP_TextUtilities::getStaticF_m_rectWorldCorners()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "m_rectWorldCorners", ::TMPro::TMP_TextUtilities*>();
}
inline int32_t TMPro::TMP_TextUtilities::GetCursorIndexFromPosition(::TMPro::TMP_Text*  textComponent, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"GetCursorIndexFromPosition", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textComponent, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::GetCursorIndexFromPosition(::TMPro::TMP_Text*  textComponent, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera, ::by_ref<::TMPro::CaretPosition>  cursor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"GetCursorIndexFromPosition", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::TMPro::CaretPosition>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, textComponent, position, camera, cursor);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestLine(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindNearestLine", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestCharacterOnLine(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, int32_t  line, ::UnityEngine::Camera*  camera, bool  visibleOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindNearestCharacterOnLine", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, line, camera, visibleOnly);
}
inline bool TMPro::TMP_TextUtilities::IsIntersectingRectTransform(::UnityEngine::RectTransform*  rectTransform, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"IsIntersectingRectTransform", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rectTransform, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindIntersectingCharacter(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera, bool  visibleOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindIntersectingCharacter", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera, visibleOnly);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestCharacter(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera, bool  visibleOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindNearestCharacter", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera, visibleOnly);
}
inline int32_t TMPro::TMP_TextUtilities::FindIntersectingWord(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindIntersectingWord", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestWord(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindNearestWord", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindIntersectingLine(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindIntersectingLine", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindIntersectingLink(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindIntersectingLink", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera);
}
inline int32_t TMPro::TMP_TextUtilities::FindNearestLink(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"FindNearestLink", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text, position, camera);
}
inline bool TMPro::TMP_TextUtilities::PointIntersectRectangle(::UnityEngine::Vector3  m, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c, ::UnityEngine::Vector3  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"PointIntersectRectangle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m, a, b, c, d);
}
inline bool TMPro::TMP_TextUtilities::ScreenPointToWorldPointInRectangle(::UnityEngine::Transform*  transform, ::UnityEngine::Vector2  screenPoint, ::UnityEngine::Camera*  cam, ::by_ref<::UnityEngine::Vector3>  worldPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"ScreenPointToWorldPointInRectangle", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, transform, screenPoint, cam, worldPoint);
}
inline bool TMPro::TMP_TextUtilities::IntersectLinePlane(::GlobalNamespace::TMP_TextUtilities_LineSegment  line, ::UnityEngine::Vector3  point, ::UnityEngine::Vector3  normal, ::by_ref<::UnityEngine::Vector3>  intersectingPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"IntersectLinePlane", {}, {::i2c::type_of<::GlobalNamespace::TMP_TextUtilities_LineSegment>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, line, point, normal, intersectingPoint);
}
inline float_t TMPro::TMP_TextUtilities::DistanceToLine(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"DistanceToLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, point);
}
inline char16_t TMPro::TMP_TextUtilities::ToLowerFast(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"ToLowerFast", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline char16_t TMPro::TMP_TextUtilities::ToUpperFast(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"ToUpperFast", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline uint32_t TMPro::TMP_TextUtilities::ToUpperASCIIFast(uint32_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"ToUpperASCIIFast", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, c);
}
inline int32_t TMPro::TMP_TextUtilities::GetHashCode(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline int32_t TMPro::TMP_TextUtilities::GetSimpleHashCode(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"GetSimpleHashCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline uint32_t TMPro::TMP_TextUtilities::GetSimpleHashCodeLowercase(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"GetSimpleHashCodeLowercase", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, s);
}
inline uint32_t TMPro::TMP_TextUtilities::GetHashCodeCaseInSensitive(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"GetHashCodeCaseInSensitive", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, s);
}
inline int32_t TMPro::TMP_TextUtilities::HexToInt(char16_t  hex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"HexToInt", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hex);
}
inline int32_t TMPro::TMP_TextUtilities::StringHexToInt(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_TextUtilities*>(),
                        {"StringHexToInt", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_TextUtilities::TMP_TextUtilities()   {
}
