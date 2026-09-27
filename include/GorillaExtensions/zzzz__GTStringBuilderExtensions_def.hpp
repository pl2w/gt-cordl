#pragma once
// IWYU pragma private; include "GorillaExtensions/GTStringBuilderExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTStringBuilderExtensions)
namespace Cysharp::Text {
struct Utf16ValueStringBuilder;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaExtensions {
class GTStringBuilderExtensions;
}
// Write type traits
MARK_REF_T(::GorillaExtensions::GTStringBuilderExtensions*);
DEFINE_IL2CPP_CLASS(::GorillaExtensions::GTStringBuilderExtensions*, "GorillaExtensions", "GTStringBuilderExtensions");
// [Extension]
// Dependencies System.Object
namespace GorillaExtensions {
// Is value type: false
// CS Name: GorillaExtensions.GTStringBuilderExtensions
class CORDL_TYPE GTStringBuilderExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GTAddPath, addr 0x5cf4e40, size 0x84, virtual false, abstract: false, final false
static inline void GTAddPath(::Cysharp::Text::Utf16ValueStringBuilder  stringBuilderToAddTo, ::UnityEngine::GameObject*  gameObject) ;

/// [Extension]
/// @brief Method GTAddPath, addr 0x5cf514c, size 0x68, virtual false, abstract: false, final false
static inline void GTAddPath(::Cysharp::Text::Utf16ValueStringBuilder  stringBuilderToAddTo, ::UnityEngine::Transform*  transform) ;

/// [Extension]
/// @brief Method GTMany, addr 0x5cf53d4, size 0x178, virtual false, abstract: false, final false
static inline void GTMany(::Cysharp::Text::Utf16ValueStringBuilder  sb, ::StringW  a, ::StringW  b) ;

/// [Extension]
/// @brief Method GTMany, addr 0x5cf554c, size 0x1fc, virtual false, abstract: false, final false
static inline void GTMany(::Cysharp::Text::Utf16ValueStringBuilder  sb, ::StringW  a, ::StringW  b, ::StringW  c) ;

/// [Extension]
/// @brief Method GTMany, addr 0x5cf5748, size 0x288, virtual false, abstract: false, final false
static inline void GTMany(::Cysharp::Text::Utf16ValueStringBuilder  sb, ::StringW  a, ::StringW  b, ::StringW  c, ::StringW  d) ;

/// [Extension]
/// @brief Method GTMany, addr 0x5cf59d0, size 0x30c, virtual false, abstract: false, final false
static inline void GTMany(::Cysharp::Text::Utf16ValueStringBuilder  sb, ::StringW  a, ::StringW  b, ::StringW  c, ::StringW  d, ::StringW  e) ;

/// [Extension]
/// @brief Method GTMany, addr 0x5cf5cdc, size 0x398, virtual false, abstract: false, final false
static inline void GTMany(::Cysharp::Text::Utf16ValueStringBuilder  sb, ::StringW  a, ::StringW  b, ::StringW  c, ::StringW  d, ::StringW  e, ::StringW  f) ;

/// [Extension]
/// @brief Method GTMany, addr 0x5cf6074, size 0x420, virtual false, abstract: false, final false
static inline void GTMany(::Cysharp::Text::Utf16ValueStringBuilder  sb, ::StringW  a, ::StringW  b, ::StringW  c, ::StringW  d, ::StringW  e, ::StringW  f, ::StringW  g) ;

/// [Extension]
/// @brief Method GTMany, addr 0x5cf6494, size 0x4a8, virtual false, abstract: false, final false
static inline void GTMany(::Cysharp::Text::Utf16ValueStringBuilder  sb, ::StringW  a, ::StringW  b, ::StringW  c, ::StringW  d, ::StringW  e, ::StringW  f, ::StringW  g, ::StringW  h) ;

/// [Extension]
/// @brief Method GTMany, addr 0x5cf693c, size 0x530, virtual false, abstract: false, final false
static inline void GTMany(::Cysharp::Text::Utf16ValueStringBuilder  sb, ::StringW  a, ::StringW  b, ::StringW  c, ::StringW  d, ::StringW  e, ::StringW  f, ::StringW  g, ::StringW  h, ::StringW  i) ;

/// [Extension]
/// @brief Method GTMany, addr 0x5cf6e6c, size 0x5b8, virtual false, abstract: false, final false
static inline void GTMany(::Cysharp::Text::Utf16ValueStringBuilder  sb, ::StringW  a, ::StringW  b, ::StringW  c, ::StringW  d, ::StringW  e, ::StringW  f, ::StringW  g, ::StringW  h, ::StringW  i, ::StringW  j) ;

/// [Extension]
/// @brief Method GetSegmentsOfMem, addr 0x5cf4bb4, size 0x28c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::ReadOnlyMemory_1<char16_t>>* GetSegmentsOfMem(::Cysharp::Text::Utf16ValueStringBuilder  sb, int32_t  maxCharsPerSegment) ;

/// [Extension]
/// @brief Method Q, addr 0x5cf51b4, size 0x220, virtual false, abstract: false, final false
static inline void Q(::Cysharp::Text::Utf16ValueStringBuilder  sb, ::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTStringBuilderExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTStringBuilderExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTStringBuilderExtensions(GTStringBuilderExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTStringBuilderExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTStringBuilderExtensions(GTStringBuilderExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4558};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaExtensions::GTStringBuilderExtensions) == 0x10, "Size mismatch!");

} // namespace end def GorillaExtensions
