#pragma once
// IWYU pragma private; include "Fusion/NetworkStructUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStructUtils)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class NetworkStructUtils;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkStructUtils*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkStructUtils*, "Fusion", "NetworkStructUtils");
// Dependencies Fusion.INetworkStruct, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkStructUtils
class CORDL_TYPE NetworkStructUtils : public ::System::Object {
public:
// Declarations
/// @brief Field _wordCounts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__wordCounts, put=setStaticF__wordCounts)) ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  _wordCounts;

/// @brief Method GetWordCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkStruct*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t GetWordCount() ;

/// @brief Method GetWordCount, addr 0x600c4c4, size 0x390, virtual false, abstract: false, final false
static inline int32_t GetWordCount(::System::Type*  type) ;

/// @brief Method ResetStatics, addr 0x600c44c, size 0x78, virtual false, abstract: false, final false
static inline void ResetStatics() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* getStaticF__wordCounts() ;

static inline void setStaticF__wordCounts(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkStructUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkStructUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkStructUtils(NetworkStructUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkStructUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkStructUtils(NetworkStructUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19378};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkStructUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
