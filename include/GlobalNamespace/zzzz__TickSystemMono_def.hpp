#pragma once
// IWYU pragma private; include "GlobalNamespace/TickSystemMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TickSystemMono)
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
class ITickSystemPre;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class ITickSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class TickSystemMono;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TickSystemMono*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TickSystemMono*, "", "TickSystemMono");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TickSystemMono
class CORDL_TYPE TickSystemMono : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_PostTickRunning, put=set_PostTickRunning)) bool  PostTickRunning;

 __declspec(property(get=get_PreTickRunning, put=set_PreTickRunning)) bool  PreTickRunning;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <PostTickRunning>k__BackingField, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get__PostTickRunning_k__BackingField, put=__cordl_internal_set__PostTickRunning_k__BackingField)) bool  _PostTickRunning_k__BackingField;

/// @brief Field <PreTickRunning>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__PreTickRunning_k__BackingField, put=__cordl_internal_set__PreTickRunning_k__BackingField)) bool  _PreTickRunning_k__BackingField;

/// @brief Field <TickRunning>k__BackingField, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Convert operator to "::GlobalNamespace::ITickSystem"
constexpr operator  ::GlobalNamespace::ITickSystem*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPre"
constexpr operator  ::GlobalNamespace::ITickSystemPre*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

static inline ::GlobalNamespace::TickSystemMono* New_ctor() ;

/// @brief Method OnDisable, addr 0x5adc490, size 0x6c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5adc424, size 0x6c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PostTick, addr 0x5adc504, size 0x4, virtual true, abstract: false, final false
inline void PostTick() ;

/// @brief Method PreTick, addr 0x5adc4fc, size 0x4, virtual true, abstract: false, final false
inline void PreTick() ;

/// @brief Method Tick, addr 0x5adc500, size 0x4, virtual true, abstract: false, final false
inline void Tick() ;

constexpr bool const& __cordl_internal_get__PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__PostTickRunning_k__BackingField() ;

constexpr bool const& __cordl_internal_get__PreTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__PreTickRunning_k__BackingField() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr void __cordl_internal_set__PostTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PreTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5adc508, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PostTickRunning, addr 0x5adc414, size 0x8, virtual true, abstract: false, final true
inline bool get_PostTickRunning() ;

/// [CompilerGenerated]
/// @brief Method get_PreTickRunning, addr 0x5adc3f4, size 0x8, virtual true, abstract: false, final true
inline bool get_PreTickRunning() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5adc404, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystem"
constexpr ::GlobalNamespace::ITickSystem* i___GlobalNamespace__ITickSystem() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemPre"
constexpr ::GlobalNamespace::ITickSystemPre* i___GlobalNamespace__ITickSystemPre() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_PostTickRunning, addr 0x5adc41c, size 0x8, virtual true, abstract: false, final true
inline void set_PostTickRunning(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_PreTickRunning, addr 0x5adc3fc, size 0x8, virtual true, abstract: false, final true
inline void set_PreTickRunning(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5adc40c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TickSystemMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TickSystemMono", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TickSystemMono(TickSystemMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TickSystemMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TickSystemMono(TickSystemMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3422};

/// [CompilerGenerated]
/// @brief Field <PreTickRunning>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____PreTickRunning_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x21, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PostTickRunning>k__BackingField, offset: 0x22, size: 0x1, def value: None
 bool  ____PostTickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TickSystemMono, ____PreTickRunning_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TickSystemMono, ____TickRunning_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TickSystemMono, ____PostTickRunning_k__BackingField) == 0x22, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TickSystemMono) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
