#pragma once
// IWYU pragma private; include "GlobalNamespace/TickSystemTickMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TickSystemTickMono)
namespace GlobalNamespace {
class ITickSystemTick;
}
// Forward declare root types
namespace GlobalNamespace {
class TickSystemTickMono;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TickSystemTickMono*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TickSystemTickMono*, "", "TickSystemTickMono");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TickSystemTickMono
class CORDL_TYPE TickSystemTickMono : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

static inline ::GlobalNamespace::TickSystemTickMono* New_ctor() ;

/// @brief Method OnDisable, addr 0x5adc680, size 0x6c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5adc614, size 0x6c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Tick, addr 0x5adc6ec, size 0x4, virtual true, abstract: false, final false
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5adc6f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5adc604, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5adc60c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TickSystemTickMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TickSystemTickMono", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TickSystemTickMono(TickSystemTickMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TickSystemTickMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TickSystemTickMono(TickSystemTickMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3424};

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TickSystemTickMono, ____TickRunning_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TickSystemTickMono) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
