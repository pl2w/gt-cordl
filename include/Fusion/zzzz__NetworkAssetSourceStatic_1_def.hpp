#pragma once
// IWYU pragma private; include "Fusion/NetworkAssetSourceStatic_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkAssetSourceStatic_1)
// Forward declare root types
namespace Fusion {
template<typename T>
class NetworkAssetSourceStatic_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::NetworkAssetSourceStatic_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::NetworkAssetSourceStatic_1, "Fusion", "NetworkAssetSourceStatic`1");
// Dependencies System.Object
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NetworkAssetSourceStatic`1<T>
class CORDL_TYPE NetworkAssetSourceStatic_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Field Object, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Object, put=__cordl_internal_set_Object)) T  Object;

/// @brief [Obsolete("Use Asset instead")]
 __declspec(property(get=get_Prefab, put=set_Prefab)) T  Prefab;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Acquire(bool  synchronous) ;

static inline ::Fusion::NetworkAssetSourceStatic_1<T>* New_ctor() ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Release() ;

/// @brief Method WaitForResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T WaitForResult() ;

constexpr T const& __cordl_internal_get_Object() const;

constexpr T& __cordl_internal_get_Object() ;

constexpr void __cordl_internal_set_Object(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Description, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_Description() ;

/// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsCompleted() ;

/// @brief Method get_Prefab, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Prefab() ;

/// @brief Method set_Prefab, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Prefab(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkAssetSourceStatic_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssetSourceStatic_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkAssetSourceStatic_1(NetworkAssetSourceStatic_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkAssetSourceStatic_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkAssetSourceStatic_1(NetworkAssetSourceStatic_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23415};

/// [FormerlySerializedAs("Prefab")]
/// @brief Field Object, offset: 0x10, size: 0x8, def value: None
 T  ___Object;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
