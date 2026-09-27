#pragma once
// IWYU pragma private; include "GlobalNamespace/DevInspector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DevInspector)
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class DevInspector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevInspector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevInspector*, "", "DevInspector");
// Dependencies UnityEngine.Component, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevInspector
class CORDL_TYPE DevInspector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field autoFind, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoFind, put=__cordl_internal_set_autoFind)) bool  autoFind;

/// @brief Field canvas, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_canvas, put=__cordl_internal_set_canvas)) ::UnityW<::UnityEngine::GameObject>  canvas;

/// @brief Field componentToInspect, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentToInspect, put=__cordl_internal_set_componentToInspect)) ::ArrayW<::UnityW<::UnityEngine::Component>>  componentToInspect;

/// @brief Field isEnabled, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEnabled, put=__cordl_internal_set_isEnabled)) bool  isEnabled;

/// @brief Field outputInfo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputInfo, put=__cordl_internal_set_outputInfo)) ::UnityW<::UnityEngine::UI::Text>  outputInfo;

/// @brief Field pivot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pivot, put=__cordl_internal_set_pivot)) ::UnityW<::UnityEngine::GameObject>  pivot;

/// @brief Field sidewaysOffset, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_sidewaysOffset, put=__cordl_internal_set_sidewaysOffset)) int32_t  sidewaysOffset;

static inline ::GlobalNamespace::DevInspector* New_ctor() ;

/// @brief Method OnEnable, addr 0x566f8f4, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get_autoFind() const;

constexpr bool& __cordl_internal_get_autoFind() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_canvas() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_canvas() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Component>> const& __cordl_internal_get_componentToInspect() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Component>>& __cordl_internal_get_componentToInspect() ;

constexpr bool const& __cordl_internal_get_isEnabled() const;

constexpr bool& __cordl_internal_get_isEnabled() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_outputInfo() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_outputInfo() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_pivot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_pivot() ;

constexpr int32_t const& __cordl_internal_get_sidewaysOffset() const;

constexpr int32_t& __cordl_internal_get_sidewaysOffset() ;

constexpr void __cordl_internal_set_autoFind(bool  value) ;

constexpr void __cordl_internal_set_canvas(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_componentToInspect(::ArrayW<::UnityW<::UnityEngine::Component>>  value) ;

constexpr void __cordl_internal_set_isEnabled(bool  value) ;

constexpr void __cordl_internal_set_outputInfo(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_pivot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_sidewaysOffset(int32_t  value) ;

/// @brief Method .ctor, addr 0x566f960, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevInspector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevInspector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevInspector(DevInspector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevInspector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevInspector(DevInspector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{811};

/// @brief Field pivot, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___pivot;

/// @brief Field outputInfo, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___outputInfo;

/// @brief Field componentToInspect, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Component>>  ___componentToInspect;

/// @brief Field isEnabled, offset: 0x38, size: 0x1, def value: None
 bool  ___isEnabled;

/// @brief Field autoFind, offset: 0x39, size: 0x1, def value: None
 bool  ___autoFind;

/// @brief Field canvas, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___canvas;

/// @brief Field sidewaysOffset, offset: 0x48, size: 0x4, def value: None
 int32_t  ___sidewaysOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevInspector, ___pivot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevInspector, ___outputInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevInspector, ___componentToInspect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevInspector, ___isEnabled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevInspector, ___autoFind) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevInspector, ___canvas) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevInspector, ___sidewaysOffset) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevInspector) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
