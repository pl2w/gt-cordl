#pragma once
// IWYU pragma private; include "GlobalNamespace/ftLocalStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ftLocalStorage)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ftLocalStorage;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ftLocalStorage*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ftLocalStorage*, "", "ftLocalStorage");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ftLocalStorage
class CORDL_TYPE ftLocalStorage : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field modifiedAssetPaddingHash, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_modifiedAssetPaddingHash, put=__cordl_internal_set_modifiedAssetPaddingHash)) ::System::Collections::Generic::List_1<int32_t>*  modifiedAssetPaddingHash;

/// @brief Field modifiedAssetPathList, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_modifiedAssetPathList, put=__cordl_internal_set_modifiedAssetPathList)) ::System::Collections::Generic::List_1<::StringW>*  modifiedAssetPathList;

static inline ::GlobalNamespace::ftLocalStorage* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_modifiedAssetPaddingHash() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_modifiedAssetPaddingHash() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_modifiedAssetPathList() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_modifiedAssetPathList() ;

constexpr void __cordl_internal_set_modifiedAssetPaddingHash(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_modifiedAssetPathList(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x5f2b5c4, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ftLocalStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ftLocalStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ftLocalStorage(ftLocalStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ftLocalStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ftLocalStorage(ftLocalStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32457};

/// [SerializeField]
/// @brief Field modifiedAssetPathList, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___modifiedAssetPathList;

/// [SerializeField]
/// @brief Field modifiedAssetPaddingHash, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___modifiedAssetPaddingHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ftLocalStorage, ___modifiedAssetPathList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLocalStorage, ___modifiedAssetPaddingHash) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ftLocalStorage) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
