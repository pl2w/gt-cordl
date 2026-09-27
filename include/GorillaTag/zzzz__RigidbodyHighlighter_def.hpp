#pragma once
// IWYU pragma private; include "GorillaTag/RigidbodyHighlighter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RigidbodyHighlighter)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag {
class RigidbodyHighlighter;
}
// Write type traits
MARK_REF_T(::GorillaTag::RigidbodyHighlighter*);
DEFINE_IL2CPP_CLASS(::GorillaTag::RigidbodyHighlighter*, "GorillaTag", "RigidbodyHighlighter");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.RigidbodyHighlighter
class CORDL_TYPE RigidbodyHighlighter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active, put=set_Active)) bool  Active;

 __declspec(property(get=get_ButtonText)) ::StringW  ButtonText;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GorillaTag::RigidbodyHighlighter>  Instance;

/// @brief Field <Active>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__Active_k__BackingField, put=__cordl_internal_set__Active_k__BackingField)) bool  _Active_k__BackingField;

/// @brief Field _inGameDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__inGameDuration, put=__cordl_internal_set__inGameDuration)) float_t  _inGameDuration;

/// @brief Field _lineRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lineRenderer, put=__cordl_internal_set__lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  _lineRenderer;

/// @brief Field _lineWidth, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__lineWidth, put=__cordl_internal_set__lineWidth)) float_t  _lineWidth;

/// @brief Field _rigidbodies, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbodies, put=__cordl_internal_set__rigidbodies)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  _rigidbodies;

/// @brief Field _tracerOffset, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__tracerOffset, put=__cordl_internal_set__tracerOffset)) ::UnityEngine::Vector3  _tracerOffset;

/// @brief Method Awake, addr 0x5d35220, size 0x14c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DrawBox, addr 0x5d358f4, size 0x458, virtual false, abstract: false, final false
static inline void DrawBox(::UnityEngine::Transform*  tx, ::UnityEngine::Color  color, float_t  duration) ;

/// @brief Method DrawTracers, addr 0x5d357a0, size 0x154, virtual false, abstract: false, final false
inline void DrawTracers() ;

/// @brief Method GetAwakeRigidbodies, addr 0x5d35560, size 0x240, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* GetAwakeRigidbodies() ;

/// @brief Method GetRigidbodyNames, addr 0x5d35d5c, size 0x160, virtual false, abstract: false, final false
inline void GetRigidbodyNames() ;

/// @brief Method HighlightActiveRigidbodies, addr 0x5d35d4c, size 0x10, virtual false, abstract: false, final false
inline void HighlightActiveRigidbodies() ;

static inline ::GorillaTag::RigidbodyHighlighter* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x5d35ebc, size 0x1ec, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method Update, addr 0x5d3536c, size 0x1f4, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__Active_k__BackingField() const;

constexpr bool& __cordl_internal_get__Active_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__inGameDuration() const;

constexpr float_t& __cordl_internal_get__inGameDuration() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__lineRenderer() ;

constexpr float_t const& __cordl_internal_get__lineWidth() const;

constexpr float_t& __cordl_internal_get__lineWidth() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* const& __cordl_internal_get__rigidbodies() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*& __cordl_internal_get__rigidbodies() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__tracerOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__tracerOffset() ;

constexpr void __cordl_internal_set__Active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__inGameDuration(float_t  value) ;

constexpr void __cordl_internal_set__lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set__lineWidth(float_t  value) ;

constexpr void __cordl_internal_set__rigidbodies(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  value) ;

constexpr void __cordl_internal_set__tracerOffset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5d360a8, size 0xec, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTag::RigidbodyHighlighter> getStaticF_Instance() ;

/// [CompilerGenerated]
/// @brief Method get_Active, addr 0x5d35210, size 0x8, virtual false, abstract: false, final false
inline bool get_Active() ;

/// @brief Method get_ButtonText, addr 0x5d351a4, size 0x6c, virtual false, abstract: false, final false
inline ::StringW get_ButtonText() ;

static inline void setStaticF_Instance(::UnityW<::GorillaTag::RigidbodyHighlighter>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Active, addr 0x5d35218, size 0x8, virtual false, abstract: false, final false
inline void set_Active(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigidbodyHighlighter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigidbodyHighlighter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigidbodyHighlighter(RigidbodyHighlighter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigidbodyHighlighter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigidbodyHighlighter(RigidbodyHighlighter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4652};

/// [SerializeField]
/// @brief Field _inGameDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ____inGameDuration;

/// [SerializeField]
/// @brief Field _lineRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ____lineRenderer;

/// [SerializeField]
/// @brief Field _lineWidth, offset: 0x30, size: 0x4, def value: None
 float_t  ____lineWidth;

/// [SerializeField]
/// @brief Field _tracerOffset, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____tracerOffset;

/// [CompilerGenerated]
/// @brief Field <Active>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____Active_k__BackingField;

/// @brief Field _rigidbodies, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  ____rigidbodies;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::RigidbodyHighlighter, ____inGameDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::RigidbodyHighlighter, ____lineRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::RigidbodyHighlighter, ____lineWidth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::RigidbodyHighlighter, ____tracerOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::RigidbodyHighlighter, ____Active_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::RigidbodyHighlighter, ____rigidbodies) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::RigidbodyHighlighter) == 0x50, "Size mismatch!");

} // namespace end def GorillaTag
