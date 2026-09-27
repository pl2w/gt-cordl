#pragma once
// IWYU pragma private; include "Fusion/Internal/UnityLinkedListSurrogate_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnitySurrogateBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityLinkedListSurrogate_2)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
// Forward declare root types
namespace Fusion::Internal {
template<typename T,typename ReaderWriter>
class UnityLinkedListSurrogate_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::Internal::UnityLinkedListSurrogate_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::Internal::UnityLinkedListSurrogate_2, "Fusion.Internal", "UnityLinkedListSurrogate`2");
// Dependencies Fusion.Internal.UnitySurrogateBase
namespace Fusion::Internal {
// cpp template
template<typename T,typename ReaderWriter>
// Is value type: false
// CS Name: Fusion.Internal.UnityLinkedListSurrogate`2<T,ReaderWriter>
class CORDL_TYPE UnityLinkedListSurrogate_2 : public ::Fusion::Internal::UnitySurrogateBase {
public:
// Declarations
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::ArrayW<T>  DataProperty;

/// @brief Field _readerWriter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__readerWriter, put=setStaticF__readerWriter)) ::Fusion::IElementReaderWriter_1<T>*  _readerWriter;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Init(int32_t  capacity) ;

static inline ::Fusion::Internal::UnityLinkedListSurrogate_2<T,ReaderWriter>* New_ctor() ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Read(int32_t*  data, int32_t  capacity) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Write(int32_t*  data, int32_t  capacity) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::IElementReaderWriter_1<T>* getStaticF__readerWriter() ;

/// @brief Method get_DataProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<T> get_DataProperty() ;

static inline void setStaticF__readerWriter(::Fusion::IElementReaderWriter_1<T>*  value) ;

/// @brief Method set_DataProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_DataProperty(::ArrayW<T>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityLinkedListSurrogate_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityLinkedListSurrogate_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLinkedListSurrogate_2(UnityLinkedListSurrogate_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLinkedListSurrogate_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLinkedListSurrogate_2(UnityLinkedListSurrogate_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19381};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Internal
