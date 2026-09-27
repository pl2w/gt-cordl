#pragma once
// IWYU pragma private; include "GlobalNamespace/ReflectionMetaNames.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReflectionMetaNames)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
namespace Unity::Collections {
struct FixedString32Bytes;
}
// Forward declare root types
namespace GlobalNamespace {
class ReflectionMetaNames;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ReflectionMetaNames*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReflectionMetaNames*, "", "ReflectionMetaNames");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ReflectionMetaNames
class CORDL_TYPE ReflectionMetaNames : public ::System::Object {
public:
// Declarations
/// @brief Field ReflectedNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectedNames, put=setStaticF_ReflectedNames)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::Unity::Collections::FixedString32Bytes>*  ReflectedNames;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Unity::Collections::FixedString32Bytes>* getStaticF_ReflectedNames() ;

static inline void setStaticF_ReflectedNames(::System::Collections::Generic::Dictionary_2<::System::Type*,::Unity::Collections::FixedString32Bytes>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionMetaNames() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionMetaNames", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionMetaNames(ReflectionMetaNames && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionMetaNames", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionMetaNames(ReflectionMetaNames const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3202};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ReflectionMetaNames) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
