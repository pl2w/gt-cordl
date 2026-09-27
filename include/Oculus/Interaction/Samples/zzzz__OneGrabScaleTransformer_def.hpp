#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/OneGrabScaleTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(OneGrabScaleTransformer)
namespace Oculus::Interaction::Samples {
class OneGrabScaleTransformer_OneGrabScaleConstraints;
}
namespace Oculus::Interaction {
class FloatConstraint;
}
namespace Oculus::Interaction {
class IGrabbable;
}
namespace Oculus::Interaction {
class ITransformer;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class OneGrabScaleTransformer;
}
namespace Oculus::Interaction::Samples {
class OneGrabScaleTransformer_OneGrabScaleConstraints;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::OneGrabScaleTransformer*);
MARK_REF_T(::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::OneGrabScaleTransformer*, "Oculus.Interaction.Samples", "OneGrabScaleTransformer");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints*, "Oculus.Interaction.Samples", "OneGrabScaleTransformer/OneGrabScaleConstraints");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.OneGrabScaleTransformer
class CORDL_TYPE OneGrabScaleTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OneGrabScaleConstraints = ::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints;

 __declspec(property(get=get_Constraints, put=set_Constraints)) ::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints*  Constraints;

/// @brief Field _constraints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__constraints, put=__cordl_internal_set__constraints)) ::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints*  _constraints;

/// @brief Field _grabbable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbable, put=__cordl_internal_set__grabbable)) ::Oculus::Interaction::IGrabbable*  _grabbable;

/// @brief Field _initialLocalPosition, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialLocalPosition, put=__cordl_internal_set__initialLocalPosition)) ::UnityEngine::Vector3  _initialLocalPosition;

/// @brief Field _initialLocalScale, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialLocalScale, put=__cordl_internal_set__initialLocalScale)) ::UnityEngine::Vector3  _initialLocalScale;

/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr operator  ::Oculus::Interaction::ITransformer*() noexcept;

/// @brief Method BeginTransform, addr 0xa43b4d8, size 0x188, virtual true, abstract: false, final true
inline void BeginTransform() ;

/// @brief Method EndTransform, addr 0xa43b9c8, size 0x4, virtual true, abstract: false, final true
inline void EndTransform() ;

/// @brief Method Initialize, addr 0xa43b4d0, size 0x8, virtual true, abstract: false, final true
inline void Initialize(::Oculus::Interaction::IGrabbable*  grabbable) ;

static inline ::Oculus::Interaction::Samples::OneGrabScaleTransformer* New_ctor() ;

/// @brief Method UpdateTransform, addr 0xa43b660, size 0x368, virtual true, abstract: false, final true
inline void UpdateTransform() ;

constexpr ::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints* const& __cordl_internal_get__constraints() const;

constexpr ::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints*& __cordl_internal_get__constraints() ;

constexpr ::Oculus::Interaction::IGrabbable* const& __cordl_internal_get__grabbable() const;

constexpr ::Oculus::Interaction::IGrabbable*& __cordl_internal_get__grabbable() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialLocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialLocalScale() ;

constexpr void __cordl_internal_set__constraints(::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints*  value) ;

constexpr void __cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value) ;

constexpr void __cordl_internal_set__initialLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__initialLocalScale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa43b9cc, size 0x16c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Constraints, addr 0xa43b4c0, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints* get_Constraints() ;

/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* i___Oculus__Interaction__ITransformer() noexcept;

/// @brief Method set_Constraints, addr 0xa43b4c8, size 0x8, virtual false, abstract: false, final false
inline void set_Constraints(::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneGrabScaleTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneGrabScaleTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneGrabScaleTransformer(OneGrabScaleTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneGrabScaleTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneGrabScaleTransformer(OneGrabScaleTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28315};

/// [SerializeField]
/// [Tooltip("Constraints for allowable values on different axes")]
/// @brief Field _constraints, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints*  ____constraints;

/// @brief Field _initialLocalScale, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialLocalScale;

/// @brief Field _initialLocalPosition, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialLocalPosition;

/// @brief Field _grabbable, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::IGrabbable*  ____grabbable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::OneGrabScaleTransformer, ____constraints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::OneGrabScaleTransformer, ____initialLocalScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::OneGrabScaleTransformer, ____initialLocalPosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::OneGrabScaleTransformer, ____grabbable) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::OneGrabScaleTransformer) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// Dependencies System.Object
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.OneGrabScaleTransformer/OneGrabScaleConstraints
class CORDL_TYPE OneGrabScaleTransformer_OneGrabScaleConstraints : public ::System::Object {
public:
// Declarations
/// @brief Field ConstrainXYAspectRatio, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_ConstrainXYAspectRatio, put=__cordl_internal_set_ConstrainXYAspectRatio)) bool  ConstrainXYAspectRatio;

/// @brief Field IgnoreFixedAxes, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgnoreFixedAxes, put=__cordl_internal_set_IgnoreFixedAxes)) bool  IgnoreFixedAxes;

/// @brief Field MaxX, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxX, put=__cordl_internal_set_MaxX)) ::Oculus::Interaction::FloatConstraint*  MaxX;

/// @brief Field MaxY, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxY, put=__cordl_internal_set_MaxY)) ::Oculus::Interaction::FloatConstraint*  MaxY;

/// @brief Field MaxZ, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxZ, put=__cordl_internal_set_MaxZ)) ::Oculus::Interaction::FloatConstraint*  MaxZ;

/// @brief Field MinX, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinX, put=__cordl_internal_set_MinX)) ::Oculus::Interaction::FloatConstraint*  MinX;

/// @brief Field MinY, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinY, put=__cordl_internal_set_MinY)) ::Oculus::Interaction::FloatConstraint*  MinY;

/// @brief Field MinZ, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinZ, put=__cordl_internal_set_MinZ)) ::Oculus::Interaction::FloatConstraint*  MinZ;

static inline ::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints* New_ctor() ;

constexpr bool const& __cordl_internal_get_ConstrainXYAspectRatio() const;

constexpr bool& __cordl_internal_get_ConstrainXYAspectRatio() ;

constexpr bool const& __cordl_internal_get_IgnoreFixedAxes() const;

constexpr bool& __cordl_internal_get_IgnoreFixedAxes() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MaxX() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MaxX() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MaxY() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MaxY() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MaxZ() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MaxZ() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MinX() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MinX() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MinY() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MinY() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MinZ() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MinZ() ;

constexpr void __cordl_internal_set_ConstrainXYAspectRatio(bool  value) ;

constexpr void __cordl_internal_set_IgnoreFixedAxes(bool  value) ;

constexpr void __cordl_internal_set_MaxX(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MaxY(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MaxZ(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MinX(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MinY(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MinZ(::Oculus::Interaction::FloatConstraint*  value) ;

/// @brief Method .ctor, addr 0xa43bb38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneGrabScaleTransformer_OneGrabScaleConstraints() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneGrabScaleTransformer_OneGrabScaleConstraints", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneGrabScaleTransformer_OneGrabScaleConstraints(OneGrabScaleTransformer_OneGrabScaleConstraints && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneGrabScaleTransformer_OneGrabScaleConstraints", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneGrabScaleTransformer_OneGrabScaleConstraints(OneGrabScaleTransformer_OneGrabScaleConstraints const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28314};

/// @brief Field IgnoreFixedAxes, offset: 0x10, size: 0x1, def value: None
 bool  ___IgnoreFixedAxes;

/// @brief Field ConstrainXYAspectRatio, offset: 0x11, size: 0x1, def value: None
 bool  ___ConstrainXYAspectRatio;

/// @brief Field MinX, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MinX;

/// @brief Field MaxX, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MaxX;

/// @brief Field MinY, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MinY;

/// @brief Field MaxY, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MaxY;

/// @brief Field MinZ, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MinZ;

/// @brief Field MaxZ, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MaxZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints, ___IgnoreFixedAxes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints, ___ConstrainXYAspectRatio) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints, ___MinX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints, ___MaxX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints, ___MinY) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints, ___MaxY) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints, ___MinZ) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints, ___MaxZ) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::OneGrabScaleTransformer_OneGrabScaleConstraints) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
