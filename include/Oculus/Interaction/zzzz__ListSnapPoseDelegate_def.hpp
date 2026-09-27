#pragma once
// IWYU pragma private; include "Oculus/Interaction/ListSnapPoseDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ListSnapPoseDelegate)
namespace Oculus::Interaction {
class ISnapPoseDelegate;
}
namespace Oculus::Interaction {
class ListLayoutEase;
}
namespace Oculus::Interaction {
class ListLayout;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class ListSnapPoseDelegate;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ListSnapPoseDelegate*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ListSnapPoseDelegate*, "Oculus.Interaction", "ListSnapPoseDelegate");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ListSnapPoseDelegate
class CORDL_TYPE ListSnapPoseDelegate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Size)) float_t  Size;

/// @brief Field _defaultSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultSize, put=__cordl_internal_set__defaultSize)) float_t  _defaultSize;

/// @brief Field _layout, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__layout, put=__cordl_internal_set__layout)) ::Oculus::Interaction::ListLayout*  _layout;

/// @brief Field _layoutEase, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__layoutEase, put=__cordl_internal_set__layoutEase)) ::Oculus::Interaction::ListLayoutEase*  _layoutEase;

/// @brief Field _snappedIds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__snappedIds, put=__cordl_internal_set__snappedIds)) ::System::Collections::Generic::HashSet_1<int32_t>*  _snappedIds;

/// @brief Convert operator to "::Oculus::Interaction::ISnapPoseDelegate"
constexpr operator  ::Oculus::Interaction::ISnapPoseDelegate*() noexcept;

/// @brief Method FloatForPose, addr 0xa460f28, size 0x2c, virtual true, abstract: false, final false
inline float_t FloatForPose(::UnityEngine::Pose  pose) ;

/// @brief Method MoveTrackedElement, addr 0xa461160, size 0x5c, virtual true, abstract: false, final true
inline void MoveTrackedElement(int32_t  id, ::UnityEngine::Pose  p) ;

static inline ::Oculus::Interaction::ListSnapPoseDelegate* New_ctor() ;

/// @brief Method PoseForFloat, addr 0xa460f54, size 0xb8, virtual true, abstract: false, final false
inline ::UnityEngine::Pose PoseForFloat(float_t  position) ;

/// @brief Method SizeForId, addr 0xa460f20, size 0x8, virtual true, abstract: false, final false
inline float_t SizeForId(int32_t  id) ;

/// @brief Method SnapElement, addr 0xa4610b0, size 0x58, virtual true, abstract: false, final true
inline void SnapElement(int32_t  id, ::UnityEngine::Pose  pose) ;

/// @brief Method SnapPoseForElement, addr 0xa4611bc, size 0x11c, virtual true, abstract: false, final true
inline bool SnapPoseForElement(int32_t  id, ::UnityEngine::Pose  pose, ::by_ref<::UnityEngine::Pose>  result) ;

/// @brief Method Start, addr 0xa460ddc, size 0x120, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TrackElement, addr 0xa46100c, size 0x90, virtual true, abstract: false, final true
inline void TrackElement(int32_t  id, ::UnityEngine::Pose  p) ;

/// @brief Method UnsnapElement, addr 0xa461108, size 0x58, virtual true, abstract: false, final true
inline void UnsnapElement(int32_t  id) ;

/// @brief Method UntrackElement, addr 0xa46109c, size 0x14, virtual true, abstract: false, final true
inline void UntrackElement(int32_t  id) ;

/// @brief Method Update, addr 0xa460efc, size 0x24, virtual true, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__defaultSize() const;

constexpr float_t& __cordl_internal_get__defaultSize() ;

constexpr ::Oculus::Interaction::ListLayout* const& __cordl_internal_get__layout() const;

constexpr ::Oculus::Interaction::ListLayout*& __cordl_internal_get__layout() ;

constexpr ::Oculus::Interaction::ListLayoutEase* const& __cordl_internal_get__layoutEase() const;

constexpr ::Oculus::Interaction::ListLayoutEase*& __cordl_internal_get__layoutEase() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__snappedIds() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__snappedIds() ;

constexpr void __cordl_internal_set__defaultSize(float_t  value) ;

constexpr void __cordl_internal_set__layout(::Oculus::Interaction::ListLayout*  value) ;

constexpr void __cordl_internal_set__layoutEase(::Oculus::Interaction::ListLayoutEase*  value) ;

constexpr void __cordl_internal_set__snappedIds(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0xa4612f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Size, addr 0xa4612d8, size 0x18, virtual false, abstract: false, final false
inline float_t get_Size() ;

/// @brief Convert to "::Oculus::Interaction::ISnapPoseDelegate"
constexpr ::Oculus::Interaction::ISnapPoseDelegate* i___Oculus__Interaction__ISnapPoseDelegate() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListSnapPoseDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListSnapPoseDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListSnapPoseDelegate(ListSnapPoseDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListSnapPoseDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListSnapPoseDelegate(ListSnapPoseDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15876};

/// @brief Field _snappedIds, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ____snappedIds;

/// @brief Field _layout, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::ListLayout*  ____layout;

/// @brief Field _layoutEase, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::ListLayoutEase*  ____layoutEase;

/// [SerializeField]
/// @brief Field _defaultSize, offset: 0x38, size: 0x4, def value: None
 float_t  ____defaultSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ListSnapPoseDelegate, ____snappedIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListSnapPoseDelegate, ____layout) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListSnapPoseDelegate, ____layoutEase) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListSnapPoseDelegate, ____defaultSize) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ListSnapPoseDelegate) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction
