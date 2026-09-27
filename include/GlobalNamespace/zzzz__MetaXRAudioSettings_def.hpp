#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAudioSettings)
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAudioSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAudioSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioSettings*, "", "MetaXRAudioSettings");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAudioSettings
class CORDL_TYPE MetaXRAudioSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::MetaXRAudioSettings>  instance;

/// @brief Field voiceLimit, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_voiceLimit, put=__cordl_internal_set_voiceLimit)) int32_t  voiceLimit;

static inline ::GlobalNamespace::MetaXRAudioSettings* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_voiceLimit() const;

constexpr int32_t& __cordl_internal_get_voiceLimit() ;

constexpr void __cordl_internal_set_voiceLimit(int32_t  value) ;

/// @brief Method .ctor, addr 0x9ebdd00, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::MetaXRAudioSettings> getStaticF_instance() ;

/// @brief Method get_Instance, addr 0x9ebdbbc, size 0x144, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::MetaXRAudioSettings> get_Instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::MetaXRAudioSettings>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAudioSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAudioSettings(MetaXRAudioSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAudioSettings(MetaXRAudioSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29953};

/// [SerializeField]
/// @brief Field voiceLimit, offset: 0x18, size: 0x4, def value: None
 int32_t  ___voiceLimit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAudioSettings, ___voiceLimit) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAudioSettings) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
