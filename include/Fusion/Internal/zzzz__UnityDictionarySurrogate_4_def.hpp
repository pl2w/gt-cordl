#pragma once
// IWYU pragma private; include "Fusion/Internal/UnityDictionarySurrogate_4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnitySurrogateBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityDictionarySurrogate_4)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Fusion {
template<typename TKey,typename TValue>
class SerializableDictionary_2;
}
// Forward declare root types
namespace Fusion::Internal {
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
class UnityDictionarySurrogate_4;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::Internal::UnityDictionarySurrogate_4);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::Internal::UnityDictionarySurrogate_4, "Fusion.Internal", "UnityDictionarySurrogate`4");
// Dependencies Fusion.Internal.UnitySurrogateBase
namespace Fusion::Internal {
// cpp template
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
// Is value type: false
// CS Name: Fusion.Internal.UnityDictionarySurrogate`4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>
class CORDL_TYPE UnityDictionarySurrogate_4 : public ::Fusion::Internal::UnitySurrogateBase {
public:
// Declarations
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::Fusion::SerializableDictionary_2<TKeyType,TValueType>*  DataProperty;

/// @brief Field _keyReaderWriter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__keyReaderWriter, put=setStaticF__keyReaderWriter)) ::Fusion::IElementReaderWriter_1<TKeyType>*  _keyReaderWriter;

/// @brief Field _valReaderWriter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__valReaderWriter, put=setStaticF__valReaderWriter)) ::Fusion::IElementReaderWriter_1<TValueType>*  _valReaderWriter;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Init(int32_t  capacity) ;

static inline ::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>* New_ctor() ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Read(int32_t*  data, int32_t  capacity) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Write(int32_t*  data, int32_t  capacity) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::IElementReaderWriter_1<TKeyType>* getStaticF__keyReaderWriter() ;

static inline ::Fusion::IElementReaderWriter_1<TValueType>* getStaticF__valReaderWriter() ;

/// @brief Method get_DataProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::SerializableDictionary_2<TKeyType,TValueType>* get_DataProperty() ;

static inline void setStaticF__keyReaderWriter(::Fusion::IElementReaderWriter_1<TKeyType>*  value) ;

static inline void setStaticF__valReaderWriter(::Fusion::IElementReaderWriter_1<TValueType>*  value) ;

/// @brief Method set_DataProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_DataProperty(::Fusion::SerializableDictionary_2<TKeyType,TValueType>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityDictionarySurrogate_4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityDictionarySurrogate_4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityDictionarySurrogate_4(UnityDictionarySurrogate_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityDictionarySurrogate_4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityDictionarySurrogate_4(UnityDictionarySurrogate_4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19380};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Internal
