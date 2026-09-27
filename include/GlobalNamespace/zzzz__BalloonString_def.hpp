#pragma once
// IWYU pragma private; include "GlobalNamespace/BalloonString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BalloonString)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BalloonString;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BalloonString*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BalloonString*, "", "BalloonString");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BalloonString
class CORDL_TYPE BalloonString : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field endPositionXf, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_endPositionXf, put=__cordl_internal_set_endPositionXf)) ::UnityW<::UnityEngine::Transform>  endPositionXf;

/// @brief Field lineRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineRenderer, put=__cordl_internal_set_lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  lineRenderer;

/// @brief Field numSegments, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_numSegments, put=__cordl_internal_set_numSegments)) int32_t  numSegments;

/// @brief Field startPositionXf, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_startPositionXf, put=__cordl_internal_set_startPositionXf)) ::UnityW<::UnityEngine::Transform>  startPositionXf;

/// @brief Field vertices, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertices, put=__cordl_internal_set_vertices)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x571a984, size 0x364, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BalloonString* New_ctor() ;

/// @brief Method OnDisable, addr 0x571ae14, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x571ae08, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x571ae20, size 0xa8, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UpdateDynamics, addr 0x571ace8, size 0xa0, virtual false, abstract: false, final false
inline void UpdateDynamics() ;

/// @brief Method UpdateRenderPositions, addr 0x571ad88, size 0x80, virtual false, abstract: false, final false
inline void UpdateRenderPositions() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_endPositionXf() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_endPositionXf() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_lineRenderer() ;

constexpr int32_t const& __cordl_internal_get_numSegments() const;

constexpr int32_t& __cordl_internal_get_numSegments() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_startPositionXf() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_startPositionXf() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_vertices() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_vertices() ;

constexpr void __cordl_internal_set_endPositionXf(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_numSegments(int32_t  value) ;

constexpr void __cordl_internal_set_startPositionXf(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_vertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0x571aec8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BalloonString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BalloonString", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BalloonString(BalloonString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BalloonString", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BalloonString(BalloonString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1197};

/// @brief Field startPositionXf, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___startPositionXf;

/// @brief Field endPositionXf, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endPositionXf;

/// @brief Field vertices, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___vertices;

/// @brief Field numSegments, offset: 0x38, size: 0x4, def value: None
 int32_t  ___numSegments;

/// @brief Field lineRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___lineRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BalloonString, ___startPositionXf) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonString, ___endPositionXf) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonString, ___vertices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonString, ___numSegments) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonString, ___lineRenderer) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BalloonString) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
