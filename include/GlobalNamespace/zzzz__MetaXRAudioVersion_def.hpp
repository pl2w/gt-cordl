#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioVersion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAudioVersion)
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAudioVersion;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAudioVersion*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioVersion*, "", "MetaXRAudioVersion");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAudioVersion
class CORDL_TYPE MetaXRAudioVersion : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x9ebe724, size 0x180, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MetaXRAudio_GetVersion, addr 0x9ebe8a4, size 0x94, virtual false, abstract: false, final false
static inline void MetaXRAudio_GetVersion(::by_ref<int32_t>  Major, ::by_ref<int32_t>  Minor, ::by_ref<int32_t>  Patch) ;

static inline ::GlobalNamespace::MetaXRAudioVersion* New_ctor() ;

/// @brief Method .ctor, addr 0x9ebe938, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAudioVersion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioVersion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAudioVersion(MetaXRAudioVersion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioVersion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAudioVersion(MetaXRAudioVersion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29959};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MetaXRAudioVersion) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
