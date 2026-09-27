#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonStream)
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonStream;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PhotonStream*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonStream*, "Photon.Pun", "PhotonStream");
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonStream
class CORDL_TYPE PhotonStream : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReading)) bool  IsReading;

 __declspec(property(get=get_IsWriting, put=set_IsWriting)) bool  IsWriting;

/// @brief Field <IsWriting>k__BackingField, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsWriting_k__BackingField, put=__cordl_internal_set__IsWriting_k__BackingField)) bool  _IsWriting_k__BackingField;

/// @brief Field currentItem, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentItem, put=__cordl_internal_set_currentItem)) int32_t  currentItem;

/// @brief Field readData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_readData, put=__cordl_internal_set_readData)) ::ArrayW<::System::Object*>  readData;

/// @brief Field writeData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_writeData, put=__cordl_internal_set_writeData)) ::System::Collections::Generic::List_1<::System::Object*>*  writeData;

/// [Obsolete("writeData is a list now. Use and re-use it directly.")]
/// @brief Method CopyToListAndClear, addr 0xa72ba64, size 0xa4, virtual false, abstract: false, final false
inline bool CopyToListAndClear(::System::Collections::Generic::List_1<::System::Object*>*  target) ;

/// @brief Method GetWriteStream, addr 0xa72b944, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::Object*>* GetWriteStream() ;

static inline ::Photon::Pun::PhotonStream* New_ctor(bool  write, ::ArrayW<::System::Object*>  incomingData) ;

/// @brief Method PeekNext, addr 0xa72b9bc, size 0xa8, virtual false, abstract: false, final false
inline ::System::Object* PeekNext() ;

/// @brief Method ReceiveNext, addr 0xa72a370, size 0xb0, virtual false, abstract: false, final false
inline ::System::Object* ReceiveNext() ;

/// [Obsolete("Either SET the writeData with an empty List or use Clear().")]
/// @brief Method ResetWriteStream, addr 0xa72b94c, size 0x70, virtual false, abstract: false, final false
inline void ResetWriteStream() ;

/// @brief Method SendNext, addr 0xa727a84, size 0x100, virtual false, abstract: false, final false
inline void SendNext(::System::Object*  obj) ;

/// @brief Method Serialize, addr 0xa72bb70, size 0x14c, virtual false, abstract: false, final false
inline void Serialize(::by_ref<bool>  myBool) ;

/// @brief Method Serialize, addr 0xa72bcbc, size 0x144, virtual false, abstract: false, final false
inline void Serialize(::by_ref<int32_t>  myInt) ;

/// @brief Method Serialize, addr 0xa72c308, size 0x180, virtual false, abstract: false, final false
inline void Serialize(::by_ref<::Photon::Realtime::Player*>  obj) ;

/// @brief Method Serialize, addr 0xa72c728, size 0x148, virtual false, abstract: false, final false
inline void Serialize(::by_ref<::UnityEngine::Quaternion>  obj) ;

/// @brief Method Serialize, addr 0xa72c5e0, size 0x148, virtual false, abstract: false, final false
inline void Serialize(::by_ref<::UnityEngine::Vector2>  obj) ;

/// @brief Method Serialize, addr 0xa72c488, size 0x158, virtual false, abstract: false, final false
inline void Serialize(::by_ref<::UnityEngine::Vector3>  obj) ;

/// @brief Method Serialize, addr 0xa72c1c4, size 0x144, virtual false, abstract: false, final false
inline void Serialize(::by_ref<float_t>  obj) ;

/// @brief Method Serialize, addr 0xa72be00, size 0x13c, virtual false, abstract: false, final false
inline void Serialize(::by_ref<::StringW>  value) ;

/// @brief Method Serialize, addr 0xa72bf3c, size 0x144, virtual false, abstract: false, final false
inline void Serialize(::by_ref<char16_t>  value) ;

/// @brief Method Serialize, addr 0xa72c080, size 0x144, virtual false, abstract: false, final false
inline void Serialize(::by_ref<int16_t>  value) ;

/// @brief Method SetReadStream, addr 0xa728430, size 0x30, virtual false, abstract: false, final false
inline void SetReadStream(::ArrayW<::System::Object*>  incomingData, int32_t  pos) ;

/// @brief Method SetWriteStream, addr 0xa727958, size 0x12c, virtual false, abstract: false, final false
inline void SetWriteStream(::System::Collections::Generic::List_1<::System::Object*>*  newWriteData, int32_t  pos) ;

/// @brief Method ToArray, addr 0xa72bb08, size 0x68, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> ToArray() ;

constexpr bool const& __cordl_internal_get__IsWriting_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsWriting_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_currentItem() const;

constexpr int32_t& __cordl_internal_get_currentItem() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get_readData() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get_readData() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get_writeData() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_writeData() ;

constexpr void __cordl_internal_set__IsWriting_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_currentItem(int32_t  value) ;

constexpr void __cordl_internal_set_readData(::ArrayW<::System::Object*>  value) ;

constexpr void __cordl_internal_set_writeData(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0xa718b1c, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(bool  write, ::ArrayW<::System::Object*>  incomingData) ;

/// @brief Method get_Count, addr 0xa727ca4, size 0x58, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsReading, addr 0xa72b934, size 0x10, virtual false, abstract: false, final false
inline bool get_IsReading() ;

/// [CompilerGenerated]
/// @brief Method get_IsWriting, addr 0xa72b924, size 0x8, virtual false, abstract: false, final false
inline bool get_IsWriting() ;

/// [CompilerGenerated]
/// @brief Method set_IsWriting, addr 0xa72b92c, size 0x8, virtual false, abstract: false, final false
inline void set_IsWriting(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonStream(PhotonStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonStream(PhotonStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29717};

/// @brief Field writeData, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ___writeData;

/// @brief Field readData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ___readData;

/// @brief Field currentItem, offset: 0x20, size: 0x4, def value: None
 int32_t  ___currentItem;

/// [CompilerGenerated]
/// @brief Field <IsWriting>k__BackingField, offset: 0x24, size: 0x1, def value: None
 bool  ____IsWriting_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonStream, ___writeData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStream, ___readData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStream, ___currentItem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStream, ____IsWriting_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonStream) == 0x28, "Size mismatch!");

} // namespace end def Photon::Pun
