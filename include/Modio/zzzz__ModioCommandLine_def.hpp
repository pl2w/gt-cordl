#pragma once
// IWYU pragma private; include "Modio/ModioCommandLine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioCommandLine)
namespace System::Collections::ObjectModel {
template<typename TKey,typename TValue>
class ReadOnlyDictionary_2;
}
// Forward declare root types
namespace Modio {
class ModioCommandLine;
}
// Write type traits
MARK_REF_T(::Modio::ModioCommandLine*);
DEFINE_IL2CPP_CLASS(::Modio::ModioCommandLine*, "Modio", "ModioCommandLine");
// Dependencies System.Object
namespace Modio {
// Is value type: false
// CS Name: Modio.ModioCommandLine
class CORDL_TYPE ModioCommandLine : public ::System::Object {
public:
// Declarations
/// @brief Field _argumentCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__argumentCache, put=setStaticF__argumentCache)) ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::StringW>*  _argumentCache;

/// @brief Method GetArguments, addr 0xa01a48c, size 0x250, virtual false, abstract: false, final false
static inline void GetArguments() ;

/// @brief Method TryGet, addr 0xa01a3dc, size 0xb0, virtual false, abstract: false, final false
static inline bool TryGet(::StringW  argument, ::by_ref<::StringW>  value) ;

static inline ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::StringW>* getStaticF__argumentCache() ;

static inline void setStaticF__argumentCache(::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioCommandLine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioCommandLine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioCommandLine(ModioCommandLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioCommandLine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioCommandLine(ModioCommandLine const& ) = delete;

/// @brief Field PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  PREFIX{u"-modio-"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17492};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::ModioCommandLine) == 0x10, "Size mismatch!");

} // namespace end def Modio
