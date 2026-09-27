#pragma once
// IWYU pragma private; include "Modio/Unity/Examples/Android/AndroidExample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AndroidExample)
// Forward declare root types
namespace Modio::Unity::Examples::Android {
class AndroidExample;
}
// Write type traits
MARK_REF_T(::Modio::Unity::Examples::Android::AndroidExample*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::Examples::Android::AndroidExample*, "Modio.Unity.Examples.Android", "AndroidExample");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::Examples::Android {
// Is value type: false
// CS Name: Modio.Unity.Examples.Android.AndroidExample
class CORDL_TYPE AndroidExample : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Modio::Unity::Examples::Android::AndroidExample* New_ctor() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)2)]
/// @brief Method OnAssemblyLoaded, addr 0x9f9d1f8, size 0x1ac, virtual false, abstract: false, final false
static inline void OnAssemblyLoaded() ;

/// @brief Method .ctor, addr 0x9f9d3a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidExample() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidExample", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidExample(AndroidExample && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidExample", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidExample(AndroidExample const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33003};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::Examples::Android::AndroidExample) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::Examples::Android
