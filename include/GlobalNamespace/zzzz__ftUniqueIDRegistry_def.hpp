#pragma once
// IWYU pragma private; include "GlobalNamespace/ftUniqueIDRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ftUniqueIDRegistry)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ftUniqueIDRegistry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ftUniqueIDRegistry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ftUniqueIDRegistry*, "", "ftUniqueIDRegistry");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ftUniqueIDRegistry
class CORDL_TYPE ftUniqueIDRegistry : public ::System::Object {
public:
// Declarations
/// @brief Field Mapping, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Mapping, put=setStaticF_Mapping)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  Mapping;

/// @brief Field MappingInv, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MappingInv, put=setStaticF_MappingInv)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  MappingInv;

/// @brief Method Deregister, addr 0x5f2b9d8, size 0xd4, virtual false, abstract: false, final false
static inline void Deregister(int32_t  id) ;

/// @brief Method GetInstanceId, addr 0x5f2baac, size 0xa0, virtual false, abstract: false, final false
static inline int32_t GetInstanceId(int32_t  id) ;

/// @brief Method GetUID, addr 0x5f2bc50, size 0xa0, virtual false, abstract: false, final false
static inline int32_t GetUID(int32_t  instanceId) ;

/// @brief Method Register, addr 0x5f2bb4c, size 0x104, virtual false, abstract: false, final false
static inline void Register(int32_t  id, int32_t  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* getStaticF_Mapping() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* getStaticF_MappingInv() ;

static inline void setStaticF_Mapping(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

static inline void setStaticF_MappingInv(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ftUniqueIDRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ftUniqueIDRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ftUniqueIDRegistry(ftUniqueIDRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ftUniqueIDRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ftUniqueIDRegistry(ftUniqueIDRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32459};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ftUniqueIDRegistry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
