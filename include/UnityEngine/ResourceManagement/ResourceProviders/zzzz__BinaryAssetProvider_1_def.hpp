#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/BinaryAssetProvider_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__BinaryDataProvider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryAssetProvider_1)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
template<typename TAdapter>
class BinaryAssetProvider_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1, "UnityEngine.ResourceManagement.ResourceProviders", "BinaryAssetProvider`1");
// [DisplayName("Binary Asset Provider")]
// Dependencies UnityEngine.ResourceManagement.ResourceProviders.BinaryDataProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// cpp template
template<typename TAdapter>
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.BinaryAssetProvider`1<TAdapter>
class CORDL_TYPE BinaryAssetProvider_1 : public ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider {
public:
// Declarations
/// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* Convert(::System::Type*  type, ::ArrayW<uint8_t>  data) ;

static inline ::UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BinaryAssetProvider_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BinaryAssetProvider_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BinaryAssetProvider_1(BinaryAssetProvider_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinaryAssetProvider_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinaryAssetProvider_1(BinaryAssetProvider_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28608};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
