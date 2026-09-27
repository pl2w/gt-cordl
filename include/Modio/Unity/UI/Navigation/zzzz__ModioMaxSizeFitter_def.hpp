#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Navigation/ModioMaxSizeFitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioMaxSizeFitter)
namespace GlobalNamespace {
struct RectTransform_Axis;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
// Forward declare root types
namespace Modio::Unity::UI::Navigation {
class ModioMaxSizeFitter;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Navigation::ModioMaxSizeFitter*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Navigation::ModioMaxSizeFitter*, "Modio.Unity.UI.Navigation", "ModioMaxSizeFitter");
// [RequireComponent(typeof(UnityEngine.RectTransform))]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace Modio::Unity::UI::Navigation {
// Is value type: false
// CS Name: Modio.Unity.UI.Navigation.ModioMaxSizeFitter
class CORDL_TYPE ModioMaxSizeFitter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _calculatingNestedSize, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__calculatingNestedSize, put=__cordl_internal_set__calculatingNestedSize)) bool  _calculatingNestedSize;

/// @brief Field _layoutPriority, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__layoutPriority, put=__cordl_internal_set__layoutPriority)) int32_t  _layoutPriority;

/// @brief Field _maxSize, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__maxSize, put=__cordl_internal_set__maxSize)) ::UnityEngine::Vector2  _maxSize;

 __declspec(property(get=get_flexibleHeight)) float_t  flexibleHeight;

 __declspec(property(get=get_flexibleWidth)) float_t  flexibleWidth;

 __declspec(property(get=get_layoutPriority)) int32_t  layoutPriority;

 __declspec(property(get=get_minHeight)) float_t  minHeight;

 __declspec(property(get=get_minWidth)) float_t  minWidth;

 __declspec(property(get=get_preferredHeight)) float_t  preferredHeight;

 __declspec(property(get=get_preferredWidth)) float_t  preferredWidth;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr operator  ::UnityEngine::UI::ILayoutElement*() noexcept;

/// @brief Method CalculateLayoutInputHorizontal, addr 0x9fb3bac, size 0x4, virtual true, abstract: false, final true
inline void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical, addr 0x9fb3bb0, size 0x4, virtual true, abstract: false, final true
inline void CalculateLayoutInputVertical() ;

/// @brief Method GetPreferredSize, addr 0x9fb3a7c, size 0x118, virtual false, abstract: false, final false
inline float_t GetPreferredSize(::GlobalNamespace::RectTransform_Axis  axis) ;

static inline ::Modio::Unity::UI::Navigation::ModioMaxSizeFitter* New_ctor() ;

constexpr bool const& __cordl_internal_get__calculatingNestedSize() const;

constexpr bool& __cordl_internal_get__calculatingNestedSize() ;

constexpr int32_t const& __cordl_internal_get__layoutPriority() const;

constexpr int32_t& __cordl_internal_get__layoutPriority() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__maxSize() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__maxSize() ;

constexpr void __cordl_internal_set__calculatingNestedSize(bool  value) ;

constexpr void __cordl_internal_set__layoutPriority(int32_t  value) ;

constexpr void __cordl_internal_set__maxSize(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x9fb3be4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_flexibleHeight, addr 0x9fb3bdc, size 0x8, virtual true, abstract: false, final true
inline float_t get_flexibleHeight() ;

/// @brief Method get_flexibleWidth, addr 0x9fb3bc4, size 0x8, virtual true, abstract: false, final true
inline float_t get_flexibleWidth() ;

/// @brief Method get_layoutPriority, addr 0x9fb3b94, size 0x18, virtual true, abstract: false, final true
inline int32_t get_layoutPriority() ;

/// @brief Method get_minHeight, addr 0x9fb3bcc, size 0x8, virtual true, abstract: false, final true
inline float_t get_minHeight() ;

/// @brief Method get_minWidth, addr 0x9fb3bb4, size 0x8, virtual true, abstract: false, final true
inline float_t get_minWidth() ;

/// @brief Method get_preferredHeight, addr 0x9fb3bd4, size 0x8, virtual true, abstract: false, final true
inline float_t get_preferredHeight() ;

/// @brief Method get_preferredWidth, addr 0x9fb3bbc, size 0x8, virtual true, abstract: false, final true
inline float_t get_preferredWidth() ;

/// @brief Convert to "::UnityEngine::UI::ILayoutElement"
constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioMaxSizeFitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioMaxSizeFitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioMaxSizeFitter(ModioMaxSizeFitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioMaxSizeFitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioMaxSizeFitter(ModioMaxSizeFitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27118};

/// [SerializeField]
/// [Tooltip("Leaving an axis at 0 will ignore it")]
/// @brief Field _maxSize, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____maxSize;

/// [SerializeField]
/// @brief Field _layoutPriority, offset: 0x28, size: 0x4, def value: None
 int32_t  ____layoutPriority;

/// @brief Field _calculatingNestedSize, offset: 0x2c, size: 0x1, def value: None
 bool  ____calculatingNestedSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioMaxSizeFitter, ____maxSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioMaxSizeFitter, ____layoutPriority) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioMaxSizeFitter, ____calculatingNestedSize) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Navigation::ModioMaxSizeFitter) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Navigation
