#pragma once
// IWYU pragma private; include "GlobalNamespace/TickSystemPreTickMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TickSystemPreTickMono)
namespace GlobalNamespace {
class ITickSystemPre;
}
// Forward declare root types
namespace GlobalNamespace {
class TickSystemPreTickMono;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TickSystemPreTickMono*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TickSystemPreTickMono*, "", "TickSystemPreTickMono");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TickSystemPreTickMono
class CORDL_TYPE TickSystemPreTickMono : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_PreTickRunning, put=set_PreTickRunning)) bool  PreTickRunning;

/// @brief Field <PreTickRunning>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__PreTickRunning_k__BackingField, put=__cordl_internal_set__PreTickRunning_k__BackingField)) bool  _PreTickRunning_k__BackingField;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPre"
constexpr operator  ::GlobalNamespace::ITickSystemPre*() noexcept;

static inline ::GlobalNamespace::TickSystemPreTickMono* New_ctor() ;

/// @brief Method OnDisable, addr 0x5adc58c, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5adc520, size 0x6c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PreTick, addr 0x5adc5f8, size 0x4, virtual true, abstract: false, final false
inline void PreTick() ;

constexpr bool const& __cordl_internal_get__PreTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__PreTickRunning_k__BackingField() ;

constexpr void __cordl_internal_set__PreTickRunning_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5adc5fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PreTickRunning, addr 0x5adc510, size 0x8, virtual true, abstract: false, final true
inline bool get_PreTickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPre"
constexpr ::GlobalNamespace::ITickSystemPre* i___GlobalNamespace__ITickSystemPre() noexcept;

/// [CompilerGenerated]
/// @brief Method set_PreTickRunning, addr 0x5adc518, size 0x8, virtual true, abstract: false, final true
inline void set_PreTickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TickSystemPreTickMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TickSystemPreTickMono", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TickSystemPreTickMono(TickSystemPreTickMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TickSystemPreTickMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TickSystemPreTickMono(TickSystemPreTickMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3423};

/// [CompilerGenerated]
/// @brief Field <PreTickRunning>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____PreTickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TickSystemPreTickMono, ____PreTickRunning_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TickSystemPreTickMono) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
