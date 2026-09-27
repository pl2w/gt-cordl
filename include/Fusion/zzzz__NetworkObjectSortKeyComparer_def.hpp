#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectSortKeyComparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectSortKeyComparer)
namespace Fusion {
class NetworkObject;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectSortKeyComparer;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectSortKeyComparer*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectSortKeyComparer*, "Fusion", "NetworkObjectSortKeyComparer");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectSortKeyComparer
class CORDL_TYPE NetworkObjectSortKeyComparer : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Fusion::NetworkObjectSortKeyComparer*  Instance;

/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::NetworkObject>>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::NetworkObject>>*() noexcept;

/// @brief Method Compare, addr 0x5fcc958, size 0x28, virtual true, abstract: false, final true
inline int32_t Compare(::Fusion::NetworkObject*  x, ::Fusion::NetworkObject*  y) ;

static inline ::Fusion::NetworkObjectSortKeyComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x5fcc980, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::NetworkObjectSortKeyComparer* getStaticF_Instance() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::NetworkObject>>* i___System__Collections__Generic__IComparer_1___UnityW___Fusion__NetworkObject__() noexcept;

static inline void setStaticF_Instance(::Fusion::NetworkObjectSortKeyComparer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectSortKeyComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectSortKeyComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectSortKeyComparer(NetworkObjectSortKeyComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectSortKeyComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectSortKeyComparer(NetworkObjectSortKeyComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19166};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectSortKeyComparer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
