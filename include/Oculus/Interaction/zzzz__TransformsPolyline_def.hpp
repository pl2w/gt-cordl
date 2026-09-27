#pragma once
// IWYU pragma private; include "Oculus/Interaction/TransformsPolyline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TransformsPolyline)
namespace Oculus::Interaction {
class IPolyline;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class TransformsPolyline;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TransformsPolyline*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TransformsPolyline*, "Oculus.Interaction", "TransformsPolyline");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TransformsPolyline
class CORDL_TYPE TransformsPolyline : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_PointsCount)) int32_t  PointsCount;

/// @brief Field _started, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _transforms, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__transforms, put=__cordl_internal_set__transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _transforms;

/// @brief Convert operator to "::Oculus::Interaction::IPolyline"
constexpr operator  ::Oculus::Interaction::IPolyline*() noexcept;

/// @brief Method InjectAllTransformsPolyline, addr 0xa4794f8, size 0x8, virtual false, abstract: false, final false
inline void InjectAllTransformsPolyline(::ArrayW<::UnityEngine::Transform*>  transforms) ;

/// @brief Method InjectTransforms, addr 0xa479500, size 0x8, virtual false, abstract: false, final false
inline void InjectTransforms(::ArrayW<::UnityEngine::Transform*>  transforms) ;

static inline ::Oculus::Interaction::TransformsPolyline* New_ctor() ;

/// @brief Method PointAtIndex, addr 0xa4794c0, size 0x38, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 PointAtIndex(int32_t  index) ;

/// @brief Method Start, addr 0xa479494, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__transforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__transforms() ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0xa479508, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PointsCount, addr 0xa47947c, size 0x18, virtual true, abstract: false, final true
inline int32_t get_PointsCount() ;

/// @brief Convert to "::Oculus::Interaction::IPolyline"
constexpr ::Oculus::Interaction::IPolyline* i___Oculus__Interaction__IPolyline() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformsPolyline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformsPolyline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformsPolyline(TransformsPolyline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformsPolyline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformsPolyline(TransformsPolyline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15958};

/// [SerializeField]
/// @brief Field _transforms, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____transforms;

/// @brief Field _started, offset: 0x28, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TransformsPolyline, ____transforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TransformsPolyline, ____started) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TransformsPolyline) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
