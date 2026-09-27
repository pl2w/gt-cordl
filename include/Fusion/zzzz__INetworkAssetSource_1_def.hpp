#pragma once
// IWYU pragma private; include "Fusion/INetworkAssetSource_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(INetworkAssetSource_1)
// Forward declare root types
namespace Fusion {
template<typename T>
class INetworkAssetSource_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::INetworkAssetSource_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::INetworkAssetSource_1, "Fusion", "INetworkAssetSource`1");
// Dependencies 
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.INetworkAssetSource`1<T>
class CORDL_TYPE INetworkAssetSource_1 {
public:
// Declarations
 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Acquire(bool  synchronous) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Release() ;

/// @brief Method WaitForResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T WaitForResult() ;

/// @brief Method get_Description, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Description() ;

/// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsCompleted() ;

// Ctor Parameters [CppParam { name: "", ty: "INetworkAssetSource_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkAssetSource_1(INetworkAssetSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19171};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
