#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHandGesture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GestureNode_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GorillaHandGesture)
namespace GlobalNamespace {
class GestureDigitNode;
}
namespace GlobalNamespace {
class GestureHandNode;
}
namespace GlobalNamespace {
class GestureNode;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaHandGesture;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaHandGesture*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHandGesture*, "", "GorillaHandGesture");
// [CreateAssetMenu(fileName = "New Hand Gesture", menuName = "Gorilla/Hand Gesture")]
// Dependencies GestureNode, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHandGesture
class CORDL_TYPE GorillaHandGesture : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_digits, put=set_digits)) ::GlobalNamespace::GestureNode*  digits;

 __declspec(property(get=get_hand, put=set_hand)) ::GlobalNamespace::GestureHandNode*  hand;

 __declspec(property(get=get_index, put=set_index)) ::GlobalNamespace::GestureDigitNode*  index;

 __declspec(property(get=get_middle, put=set_middle)) ::GlobalNamespace::GestureDigitNode*  middle;

/// @brief Field nodes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::ArrayW<::GlobalNamespace::GestureNode*>  nodes;

 __declspec(property(get=get_palm, put=set_palm)) ::GlobalNamespace::GestureNode*  palm;

 __declspec(property(get=get_thumb, put=set_thumb)) ::GlobalNamespace::GestureDigitNode*  thumb;

/// @brief Field track, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_track, put=__cordl_internal_set_track)) bool  track;

 __declspec(property(get=get_wrist, put=set_wrist)) ::GlobalNamespace::GestureNode*  wrist;

/// @brief Method InitNodes, addr 0x5650fc8, size 0x29c, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::GestureNode*> InitNodes() ;

static inline ::GlobalNamespace::GorillaHandGesture* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::GestureNode*> const& __cordl_internal_get_nodes() const;

constexpr ::ArrayW<::GlobalNamespace::GestureNode*>& __cordl_internal_get_nodes() ;

constexpr bool const& __cordl_internal_get_track() const;

constexpr bool& __cordl_internal_get_track() ;

constexpr void __cordl_internal_set_nodes(::ArrayW<::GlobalNamespace::GestureNode*>  value) ;

constexpr void __cordl_internal_set_track(bool  value) ;

/// @brief Method .ctor, addr 0x5651264, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_digits, addr 0x5650c50, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::GestureNode* get_digits() ;

/// @brief Method get_hand, addr 0x5650a40, size 0x90, virtual false, abstract: false, final false
inline ::GlobalNamespace::GestureHandNode* get_hand() ;

/// @brief Method get_index, addr 0x5650dd8, size 0x94, virtual false, abstract: false, final false
inline ::GlobalNamespace::GestureDigitNode* get_index() ;

/// @brief Method get_middle, addr 0x5650ed0, size 0x94, virtual false, abstract: false, final false
inline ::GlobalNamespace::GestureDigitNode* get_middle() ;

/// @brief Method get_palm, addr 0x5650b30, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::GestureNode* get_palm() ;

/// @brief Method get_thumb, addr 0x5650ce0, size 0x94, virtual false, abstract: false, final false
inline ::GlobalNamespace::GestureDigitNode* get_thumb() ;

/// @brief Method get_wrist, addr 0x5650bc0, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::GestureNode* get_wrist() ;

/// @brief Method set_digits, addr 0x5650c7c, size 0x64, virtual false, abstract: false, final false
inline void set_digits(::GlobalNamespace::GestureNode*  value) ;

/// @brief Method set_hand, addr 0x5650ad0, size 0x60, virtual false, abstract: false, final false
inline void set_hand(::GlobalNamespace::GestureHandNode*  value) ;

/// @brief Method set_index, addr 0x5650e6c, size 0x64, virtual false, abstract: false, final false
inline void set_index(::GlobalNamespace::GestureDigitNode*  value) ;

/// @brief Method set_middle, addr 0x5650f64, size 0x64, virtual false, abstract: false, final false
inline void set_middle(::GlobalNamespace::GestureDigitNode*  value) ;

/// @brief Method set_palm, addr 0x5650b5c, size 0x64, virtual false, abstract: false, final false
inline void set_palm(::GlobalNamespace::GestureNode*  value) ;

/// @brief Method set_thumb, addr 0x5650d74, size 0x64, virtual false, abstract: false, final false
inline void set_thumb(::GlobalNamespace::GestureDigitNode*  value) ;

/// @brief Method set_wrist, addr 0x5650bec, size 0x64, virtual false, abstract: false, final false
inline void set_wrist(::GlobalNamespace::GestureNode*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHandGesture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandGesture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHandGesture(GorillaHandGesture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandGesture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHandGesture(GorillaHandGesture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{726};

/// @brief Field track, offset: 0x18, size: 0x1, def value: None
 bool  ___track;

/// @brief Field nodes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GestureNode*>  ___nodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaHandGesture, ___track) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandGesture, ___nodes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaHandGesture) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
