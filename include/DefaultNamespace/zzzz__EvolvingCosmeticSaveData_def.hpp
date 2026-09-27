#pragma once
// IWYU pragma private; include "DefaultNamespace/EvolvingCosmeticSaveData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EvolvingCosmeticSaveData)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace DefaultNamespace {
class EvolvingCosmeticSaveData;
}
// Write type traits
MARK_REF_T(::DefaultNamespace::EvolvingCosmeticSaveData*);
DEFINE_IL2CPP_CLASS(::DefaultNamespace::EvolvingCosmeticSaveData*, "DefaultNamespace", "EvolvingCosmeticSaveData");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace DefaultNamespace {
// Is value type: false
// CS Name: DefaultNamespace.EvolvingCosmeticSaveData
class CORDL_TYPE EvolvingCosmeticSaveData : public ::System::Object {
public:
// Declarations
/// @brief Field SelectedIndices, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_SelectedIndices, put=__cordl_internal_set_SelectedIndices)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  SelectedIndices;

/// @brief Field s_instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_instance, put=setStaticF_s_instance)) ::DefaultNamespace::EvolvingCosmeticSaveData*  s_instance;

static inline ::DefaultNamespace::EvolvingCosmeticSaveData* New_ctor() ;

/// @brief Method ReadFromJson, addr 0x5dd12b4, size 0x300, virtual false, abstract: false, final false
inline void ReadFromJson(::StringW  json) ;

/// @brief Method ReadSelectedIndices, addr 0x5dd1878, size 0x190, virtual false, abstract: false, final false
inline void ReadSelectedIndices(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method Write, addr 0x5dd15b4, size 0x2c4, virtual false, abstract: false, final false
inline ::StringW Write() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_SelectedIndices() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_SelectedIndices() ;

constexpr void __cordl_internal_set_SelectedIndices(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5dd11ec, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::DefaultNamespace::EvolvingCosmeticSaveData* getStaticF_s_instance() ;

/// @brief Method get_Instance, addr 0x5dd1174, size 0x78, virtual false, abstract: false, final false
static inline ::DefaultNamespace::EvolvingCosmeticSaveData* get_Instance() ;

static inline void setStaticF_s_instance(::DefaultNamespace::EvolvingCosmeticSaveData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EvolvingCosmeticSaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmeticSaveData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EvolvingCosmeticSaveData(EvolvingCosmeticSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmeticSaveData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EvolvingCosmeticSaveData(EvolvingCosmeticSaveData const& ) = delete;

/// @brief Field PlayerPrefsKey offset 0xffffffff size 0x8
static constexpr ::ConstString  PlayerPrefsKey{u"EvolvingCosmeticSaveData"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5082};

/// @brief Field SelectedIndices, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___SelectedIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DefaultNamespace::EvolvingCosmeticSaveData, ___SelectedIndices) == 0x10, "Offset mismatch!");

static_assert(sizeof(::DefaultNamespace::EvolvingCosmeticSaveData) == 0x18, "Size mismatch!");

} // namespace end def DefaultNamespace
