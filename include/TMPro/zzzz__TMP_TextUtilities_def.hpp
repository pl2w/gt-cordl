#pragma once
// IWYU pragma private; include "TMPro/TMP_TextUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_TextUtilities)
namespace GlobalNamespace {
struct TMP_TextUtilities_LineSegment;
}
namespace TMPro {
struct CaretPosition;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace TMPro {
class TMP_TextUtilities;
}
// Write type traits
MARK_REF_T(::TMPro::TMP_TextUtilities*);
DEFINE_IL2CPP_CLASS(::TMPro::TMP_TextUtilities*, "TMPro", "TMP_TextUtilities");
// Dependencies System.Object, UnityEngine.Vector3
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_TextUtilities
class CORDL_TYPE TMP_TextUtilities : public ::System::Object {
public:
// Declarations
using LineSegment = ::GlobalNamespace::TMP_TextUtilities_LineSegment;

/// @brief Field m_rectWorldCorners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_rectWorldCorners, put=setStaticF_m_rectWorldCorners)) ::ArrayW<::UnityEngine::Vector3>  m_rectWorldCorners;

/// @brief Method DistanceToLine, addr 0xb3aad48, size 0x11c, virtual false, abstract: false, final false
static inline float_t DistanceToLine(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  point) ;

/// @brief Method FindIntersectingCharacter, addr 0xb3aaf90, size 0x238, virtual false, abstract: false, final false
static inline int32_t FindIntersectingCharacter(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera, bool  visibleOnly) ;

/// @brief Method FindIntersectingLine, addr 0xb3abd94, size 0x178, virtual false, abstract: false, final false
static inline int32_t FindIntersectingLine(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method FindIntersectingLink, addr 0xb3abf0c, size 0x388, virtual false, abstract: false, final false
static inline int32_t FindIntersectingLink(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method FindIntersectingWord, addr 0xb3ab1c8, size 0x4ac, virtual false, abstract: false, final false
static inline int32_t FindIntersectingWord(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method FindNearestCharacter, addr 0xb3a9d80, size 0x35c, virtual false, abstract: false, final false
static inline int32_t FindNearestCharacter(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera, bool  visibleOnly) ;

/// @brief Method FindNearestCharacterOnLine, addr 0xb3aa7a8, size 0x3dc, virtual false, abstract: false, final false
static inline int32_t FindNearestCharacterOnLine(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, int32_t  line, ::UnityEngine::Camera*  camera, bool  visibleOnly) ;

/// @brief Method FindNearestLine, addr 0xb3aa608, size 0x1a0, virtual false, abstract: false, final false
static inline int32_t FindNearestLine(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method FindNearestLink, addr 0xb3ac294, size 0x768, virtual false, abstract: false, final false
static inline int32_t FindNearestLink(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method FindNearestWord, addr 0xb3ab674, size 0x720, virtual false, abstract: false, final false
static inline int32_t FindNearestWord(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method GetCursorIndexFromPosition, addr 0xb3a9c1c, size 0x164, virtual false, abstract: false, final false
static inline int32_t GetCursorIndexFromPosition(::TMPro::TMP_Text*  textComponent, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method GetCursorIndexFromPosition, addr 0xb3aa3f8, size 0x210, virtual false, abstract: false, final false
static inline int32_t GetCursorIndexFromPosition(::TMPro::TMP_Text*  textComponent, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera, ::by_ref<::TMPro::CaretPosition>  cursor) ;

/// @brief Method GetHashCode, addr 0xb3accc4, size 0xcc, virtual false, abstract: false, final false
static inline int32_t GetHashCode(::StringW  s) ;

/// @brief Method GetHashCodeCaseInSensitive, addr 0xb3aceb8, size 0xbc, virtual false, abstract: false, final false
static inline uint32_t GetHashCodeCaseInSensitive(::StringW  s) ;

/// @brief Method GetSimpleHashCode, addr 0xb3acd90, size 0x6c, virtual false, abstract: false, final false
static inline int32_t GetSimpleHashCode(::StringW  s) ;

/// @brief Method GetSimpleHashCodeLowercase, addr 0xb3acdfc, size 0xbc, virtual false, abstract: false, final false
static inline uint32_t GetSimpleHashCodeLowercase(::StringW  s) ;

/// @brief Method HexToInt, addr 0xb3acf74, size 0x2c, virtual false, abstract: false, final false
static inline int32_t HexToInt(char16_t  hex) ;

/// @brief Method IntersectLinePlane, addr 0xb3ac9fc, size 0x16c, virtual false, abstract: false, final false
static inline bool IntersectLinePlane(::GlobalNamespace::TMP_TextUtilities_LineSegment  line, ::UnityEngine::Vector3  point, ::UnityEngine::Vector3  normal, ::by_ref<::UnityEngine::Vector3>  intersectingPoint) ;

/// @brief Method IsIntersectingRectTransform, addr 0xb3aae64, size 0x12c, virtual false, abstract: false, final false
static inline bool IsIntersectingRectTransform(::UnityEngine::RectTransform*  rectTransform, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method PointIntersectRectangle, addr 0xb3aab84, size 0x1c4, virtual false, abstract: false, final false
static inline bool PointIntersectRectangle(::UnityEngine::Vector3  m, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c, ::UnityEngine::Vector3  d) ;

/// @brief Method ScreenPointToWorldPointInRectangle, addr 0xb3aa0dc, size 0x31c, virtual false, abstract: false, final false
static inline bool ScreenPointToWorldPointInRectangle(::UnityEngine::Transform*  transform, ::UnityEngine::Vector2  screenPoint, ::UnityEngine::Camera*  cam, ::by_ref<::UnityEngine::Vector3>  worldPoint) ;

/// @brief Method StringHexToInt, addr 0xb3acfa0, size 0x104, virtual false, abstract: false, final false
static inline int32_t StringHexToInt(::StringW  s) ;

/// @brief Method ToLowerFast, addr 0xb3acb68, size 0x74, virtual false, abstract: false, final false
static inline char16_t ToLowerFast(char16_t  c) ;

/// @brief Method ToUpperASCIIFast, addr 0xb3acc50, size 0x74, virtual false, abstract: false, final false
static inline uint32_t ToUpperASCIIFast(uint32_t  c) ;

/// @brief Method ToUpperFast, addr 0xb3acbdc, size 0x74, virtual false, abstract: false, final false
static inline char16_t ToUpperFast(char16_t  c) ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_m_rectWorldCorners() ;

static inline void setStaticF_m_rectWorldCorners(::ArrayW<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TMP_TextUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_TextUtilities(TMP_TextUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_TextUtilities(TMP_TextUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23052};

/// @brief Field k_lookupStringL offset 0xffffffff size 0x8
static constexpr ::ConstString  k_lookupStringL{u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-"};

/// @brief Field k_lookupStringU offset 0xffffffff size 0x8
static constexpr ::ConstString  k_lookupStringU{u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TMPro::TMP_TextUtilities) == 0x10, "Size mismatch!");

} // namespace end def TMPro
