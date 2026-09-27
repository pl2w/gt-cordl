#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/Mapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Mapper)
namespace Fusion {
class HitboxRoot;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class Mapper;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::Mapper*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::Mapper*, "Fusion.LagCompensation", "Mapper");
// Dependencies System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.Mapper
class CORDL_TYPE Mapper : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field _rootToNodeIndex, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__rootToNodeIndex, put=__cordl_internal_set__rootToNodeIndex)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::HitboxRoot>,int32_t>*  _rootToNodeIndex;

/// @brief Method DeRegister, addr 0x6011594, size 0x58, virtual false, abstract: false, final false
inline void DeRegister(::Fusion::HitboxRoot*  root) ;

/// @brief Method GetLeafIndex, addr 0x60114a0, size 0x8c, virtual false, abstract: false, final false
inline int32_t GetLeafIndex(::Fusion::HitboxRoot*  root) ;

static inline ::Fusion::LagCompensation::Mapper* New_ctor() ;

/// @brief Method RegisterMapping, addr 0x601152c, size 0x68, virtual false, abstract: false, final false
inline void RegisterMapping(::Fusion::HitboxRoot*  root, int32_t  leafIndex) ;

/// @brief Method TryGetLeafIndex, addr 0x6011438, size 0x68, virtual false, abstract: false, final false
inline bool TryGetLeafIndex(::Fusion::HitboxRoot*  root, ::by_ref<int32_t>  index) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::HitboxRoot>,int32_t>* const& __cordl_internal_get__rootToNodeIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::HitboxRoot>,int32_t>*& __cordl_internal_get__rootToNodeIndex() ;

constexpr void __cordl_internal_set__rootToNodeIndex(::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::HitboxRoot>,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x60115ec, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x60113e8, size 0x50, virtual false, abstract: false, final false
inline int32_t get_Count() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mapper(Mapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mapper(Mapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19391};

/// @brief Field _rootToNodeIndex, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::HitboxRoot>,int32_t>*  ____rootToNodeIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::Mapper, ____rootToNodeIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::Mapper) == 0x18, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
