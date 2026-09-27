#pragma once
// IWYU pragma private; include "GlobalNamespace/TickSystemPostTickMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TickSystemPostTickMono)
namespace GlobalNamespace {
class ITickSystemPost;
}
// Forward declare root types
namespace GlobalNamespace {
class TickSystemPostTickMono;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TickSystemPostTickMono*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TickSystemPostTickMono*, "", "TickSystemPostTickMono");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TickSystemPostTickMono
class CORDL_TYPE TickSystemPostTickMono : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_PostTickRunning, put=set_PostTickRunning)) bool  PostTickRunning;

/// @brief Field <PostTickRunning>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__PostTickRunning_k__BackingField, put=__cordl_internal_set__PostTickRunning_k__BackingField)) bool  _PostTickRunning_k__BackingField;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

static inline ::GlobalNamespace::TickSystemPostTickMono* New_ctor() ;

/// @brief Method OnDisable, addr 0x5adc774, size 0x6c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5adc708, size 0x6c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PostTick, addr 0x5adc7e0, size 0x4, virtual true, abstract: false, final false
inline void PostTick() ;

constexpr bool const& __cordl_internal_get__PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__PostTickRunning_k__BackingField() ;

constexpr void __cordl_internal_set__PostTickRunning_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5adc7e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PostTickRunning, addr 0x5adc6f8, size 0x8, virtual true, abstract: false, final true
inline bool get_PostTickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

/// [CompilerGenerated]
/// @brief Method set_PostTickRunning, addr 0x5adc700, size 0x8, virtual true, abstract: false, final true
inline void set_PostTickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TickSystemPostTickMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TickSystemPostTickMono", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TickSystemPostTickMono(TickSystemPostTickMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TickSystemPostTickMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TickSystemPostTickMono(TickSystemPostTickMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3425};

/// [CompilerGenerated]
/// @brief Field <PostTickRunning>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____PostTickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TickSystemPostTickMono, ____PostTickRunning_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TickSystemPostTickMono) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
