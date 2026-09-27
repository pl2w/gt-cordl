#pragma once
// IWYU pragma private; include "Oculus/Interaction/OneGrabTranslateTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(OneGrabTranslateTransformer)
namespace Oculus::Interaction {
class FloatConstraint;
}
namespace Oculus::Interaction {
class IGrabbable;
}
namespace Oculus::Interaction {
class ITransformer;
}
namespace Oculus::Interaction {
class OneGrabTranslateTransformer_OneGrabTranslateConstraints;
}
// Forward declare root types
namespace Oculus::Interaction {
class OneGrabTranslateTransformer;
}
namespace Oculus::Interaction {
class OneGrabTranslateTransformer_OneGrabTranslateConstraints;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::OneGrabTranslateTransformer*);
MARK_REF_T(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OneGrabTranslateTransformer*, "Oculus.Interaction", "OneGrabTranslateTransformer");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*, "Oculus.Interaction", "OneGrabTranslateTransformer/OneGrabTranslateConstraints");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.OneGrabTranslateTransformer
class CORDL_TYPE OneGrabTranslateTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OneGrabTranslateConstraints = ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints;

 __declspec(property(get=get_Constraints, put=set_Constraints)) ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*  Constraints;

/// @brief Field _constraints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__constraints, put=__cordl_internal_set__constraints)) ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*  _constraints;

/// @brief Field _grabbable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbable, put=__cordl_internal_set__grabbable)) ::Oculus::Interaction::IGrabbable*  _grabbable;

/// @brief Field _initialPosition, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialPosition, put=__cordl_internal_set__initialPosition)) ::UnityEngine::Vector3  _initialPosition;

/// @brief Field _localToTarget, offset 0x48, size 0x1c 
 __declspec(property(get=__cordl_internal_get__localToTarget, put=__cordl_internal_set__localToTarget)) ::UnityEngine::Pose  _localToTarget;

/// @brief Field _parentConstraints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__parentConstraints, put=__cordl_internal_set__parentConstraints)) ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*  _parentConstraints;

/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr operator  ::Oculus::Interaction::ITransformer*() noexcept;

/// @brief Method BeginTransform, addr 0xa44c8dc, size 0x1b4, virtual true, abstract: false, final true
inline void BeginTransform() ;

/// @brief Method ConstrainTransform, addr 0xa44cd7c, size 0x170, virtual false, abstract: false, final false
inline void ConstrainTransform() ;

/// @brief Method EndTransform, addr 0xa44ceec, size 0x4, virtual true, abstract: false, final true
inline void EndTransform() ;

/// @brief Method GenerateParentConstraints, addr 0xa44c4ec, size 0x310, virtual false, abstract: false, final false
inline void GenerateParentConstraints() ;

/// @brief Method Initialize, addr 0xa44c7fc, size 0xd8, virtual true, abstract: false, final true
inline void Initialize(::Oculus::Interaction::IGrabbable*  grabbable) ;

/// @brief Method InjectOptionalConstraints, addr 0xa44cef0, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalConstraints(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*  constraints) ;

static inline ::Oculus::Interaction::OneGrabTranslateTransformer* New_ctor() ;

/// @brief Method UpdateTransform, addr 0xa44ca90, size 0x2ec, virtual true, abstract: false, final true
inline void UpdateTransform() ;

constexpr ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints* const& __cordl_internal_get__constraints() const;

constexpr ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*& __cordl_internal_get__constraints() ;

constexpr ::Oculus::Interaction::IGrabbable* const& __cordl_internal_get__grabbable() const;

constexpr ::Oculus::Interaction::IGrabbable*& __cordl_internal_get__grabbable() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialPosition() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__localToTarget() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__localToTarget() ;

constexpr ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints* const& __cordl_internal_get__parentConstraints() const;

constexpr ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*& __cordl_internal_get__parentConstraints() ;

constexpr void __cordl_internal_set__constraints(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*  value) ;

constexpr void __cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value) ;

constexpr void __cordl_internal_set__initialPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__localToTarget(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__parentConstraints(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*  value) ;

/// @brief Method .ctor, addr 0xa44cef8, size 0x168, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Constraints, addr 0xa44c4c8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints* get_Constraints() ;

/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* i___Oculus__Interaction__ITransformer() noexcept;

/// @brief Method set_Constraints, addr 0xa44c4d0, size 0x1c, virtual false, abstract: false, final false
inline void set_Constraints(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneGrabTranslateTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneGrabTranslateTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneGrabTranslateTransformer(OneGrabTranslateTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneGrabTranslateTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneGrabTranslateTransformer(OneGrabTranslateTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15826};

/// [SerializeField]
/// @brief Field _constraints, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*  ____constraints;

/// @brief Field _parentConstraints, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints*  ____parentConstraints;

/// @brief Field _initialPosition, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialPosition;

/// @brief Field _grabbable, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::IGrabbable*  ____grabbable;

/// @brief Field _localToTarget, offset: 0x48, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____localToTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OneGrabTranslateTransformer, ____constraints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabTranslateTransformer, ____parentConstraints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabTranslateTransformer, ____initialPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabTranslateTransformer, ____grabbable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabTranslateTransformer, ____localToTarget) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OneGrabTranslateTransformer) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints
class CORDL_TYPE OneGrabTranslateTransformer_OneGrabTranslateConstraints : public ::System::Object {
public:
// Declarations
/// @brief Field ConstraintsAreRelative, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ConstraintsAreRelative, put=__cordl_internal_set_ConstraintsAreRelative)) bool  ConstraintsAreRelative;

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

static inline ::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints* New_ctor() ;

constexpr bool const& __cordl_internal_get_ConstraintsAreRelative() const;

constexpr bool& __cordl_internal_get_ConstraintsAreRelative() ;

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

constexpr void __cordl_internal_set_ConstraintsAreRelative(bool  value) ;

constexpr void __cordl_internal_set_MaxX(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MaxY(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MaxZ(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MinX(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MinY(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MinZ(::Oculus::Interaction::FloatConstraint*  value) ;

/// @brief Method .ctor, addr 0xa44c8d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneGrabTranslateTransformer_OneGrabTranslateConstraints() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneGrabTranslateTransformer_OneGrabTranslateConstraints", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneGrabTranslateTransformer_OneGrabTranslateConstraints(OneGrabTranslateTransformer_OneGrabTranslateConstraints && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneGrabTranslateTransformer_OneGrabTranslateConstraints", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneGrabTranslateTransformer_OneGrabTranslateConstraints(OneGrabTranslateTransformer_OneGrabTranslateConstraints const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15825};

/// @brief Field ConstraintsAreRelative, offset: 0x10, size: 0x1, def value: None
 bool  ___ConstraintsAreRelative;

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
static_assert(offsetof(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints, ___ConstraintsAreRelative) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints, ___MinX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints, ___MaxX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints, ___MinY) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints, ___MaxY) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints, ___MinZ) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints, ___MaxZ) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OneGrabTranslateTransformer_OneGrabTranslateConstraints) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
