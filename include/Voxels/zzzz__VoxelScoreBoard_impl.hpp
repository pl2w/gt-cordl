#pragma once
// IWYU pragma private; include "Voxels/VoxelScoreBoard.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "Voxels/zzzz__VoxelScoreBoard_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "Voxels/zzzz__VoxelMaterialSet_def.hpp"
#include "Voxels/zzzz__VoxelScoreBoard_VoxelScoreEntry_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)()>(&::Voxels::VoxelScoreBoard::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5dce254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.UpdateDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)()>(&::Voxels::VoxelScoreBoard::UpdateDisplay)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x5dce344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"UpdateDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)()>(&::Voxels::VoxelScoreBoard::WriteDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dce974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                    {::i2c::class_of<::Voxels::VoxelScoreBoard*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)()>(&::Voxels::VoxelScoreBoard::ReadDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dce978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                    {::i2c::class_of<::Voxels::VoxelScoreBoard*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Voxels::VoxelScoreBoard::WriteDataPUN)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5dce97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                    {::i2c::class_of<::Voxels::VoxelScoreBoard*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Voxels::VoxelScoreBoard::ReadDataPUN)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5dceb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                    {::i2c::class_of<::Voxels::VoxelScoreBoard*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)()>(&::Voxels::VoxelScoreBoard::OnEnable)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5dcee34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)()>(&::Voxels::VoxelScoreBoard::OnDisable)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5dcf168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)()>(&::Voxels::VoxelScoreBoard::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5dcf49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)()>(&::Voxels::VoxelScoreBoard::OnLeftRoom)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5dcf764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)(::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelScoreBoard::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5dcf7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)(::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelScoreBoard::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5dcf7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.GetScoreLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Voxels::VoxelScoreBoard::*)(::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelScoreBoard::GetScoreLine)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5dcf614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"GetScoreLine", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.OnResourcesMined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)(::GlobalNamespace::NetPlayer*, ::Voxels::VoxelWorld*, ::ArrayW<int32_t>)>(&::Voxels::VoxelScoreBoard::OnResourcesMined)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5dcf8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnResourcesMined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)()>(&::Voxels::VoxelScoreBoard::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5dcfa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard._UpdateDisplay_g__AddText_11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)(::StringW, int32_t)>(&::Voxels::VoxelScoreBoard::_UpdateDisplay_g__AddText_11_0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5dce7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"<UpdateDisplay>g__AddText|11_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard._UpdateDisplay_g__AddTextRight_11_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)(::StringW, int32_t)>(&::Voxels::VoxelScoreBoard::_UpdateDisplay_g__AddTextRight_11_1)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5dce8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"<UpdateDisplay>g__AddTextRight|11_1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)(bool)>(&::Voxels::VoxelScoreBoard::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dcfb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                    {::i2c::class_of<::Voxels::VoxelScoreBoard*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelScoreBoard.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelScoreBoard::*)()>(&::Voxels::VoxelScoreBoard::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dcfb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                    {::i2c::class_of<::Voxels::VoxelScoreBoard*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Voxels::VoxelMaterialSet>& Voxels::VoxelScoreBoard::__cordl_internal_get_materialSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialSet;
}
constexpr ::UnityW<::Voxels::VoxelMaterialSet> const& Voxels::VoxelScoreBoard::__cordl_internal_get_materialSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialSet;
}
constexpr void Voxels::VoxelScoreBoard::__cordl_internal_set_materialSet(::UnityW<::Voxels::VoxelMaterialSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialSet = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Voxels::VoxelScoreBoard::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Voxels::VoxelScoreBoard::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void Voxels::VoxelScoreBoard::__cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::ArrayW<::StringW>& Voxels::VoxelScoreBoard::__cordl_internal_get__materialNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialNames;
}
constexpr ::ArrayW<::StringW> const& Voxels::VoxelScoreBoard::__cordl_internal_get__materialNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialNames;
}
constexpr void Voxels::VoxelScoreBoard::__cordl_internal_set__materialNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialNames = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry>*& Voxels::VoxelScoreBoard::__cordl_internal_get__entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entries;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry>* const& Voxels::VoxelScoreBoard::__cordl_internal_get__entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entries;
}
constexpr void Voxels::VoxelScoreBoard::__cordl_internal_set__entries(::System::Collections::Generic::List_1<::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entries = value;
}
constexpr ::System::Text::StringBuilder*& Voxels::VoxelScoreBoard::__cordl_internal_get_sb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sb;
}
constexpr ::System::Text::StringBuilder* const& Voxels::VoxelScoreBoard::__cordl_internal_get_sb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sb;
}
constexpr void Voxels::VoxelScoreBoard::__cordl_internal_set_sb(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sb = value;
}
constexpr int32_t& Voxels::VoxelScoreBoard::__cordl_internal_get_lineLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineLength;
}
constexpr int32_t const& Voxels::VoxelScoreBoard::__cordl_internal_get_lineLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineLength;
}
constexpr void Voxels::VoxelScoreBoard::__cordl_internal_set_lineLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineLength = value;
}
constexpr int32_t& Voxels::VoxelScoreBoard::__cordl_internal_get_nameWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameWidth;
}
constexpr int32_t const& Voxels::VoxelScoreBoard::__cordl_internal_get_nameWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameWidth;
}
constexpr void Voxels::VoxelScoreBoard::__cordl_internal_set_nameWidth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameWidth = value;
}
constexpr int32_t& Voxels::VoxelScoreBoard::__cordl_internal_get_columnWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___columnWidth;
}
constexpr int32_t const& Voxels::VoxelScoreBoard::__cordl_internal_get_columnWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___columnWidth;
}
constexpr void Voxels::VoxelScoreBoard::__cordl_internal_set_columnWidth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___columnWidth = value;
}
constexpr int32_t& Voxels::VoxelScoreBoard::__cordl_internal_get_columnOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___columnOffset;
}
constexpr int32_t const& Voxels::VoxelScoreBoard::__cordl_internal_get_columnOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___columnOffset;
}
constexpr void Voxels::VoxelScoreBoard::__cordl_internal_set_columnOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___columnOffset = value;
}
inline void Voxels::VoxelScoreBoard::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelScoreBoard::UpdateDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"UpdateDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelScoreBoard::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelScoreBoard*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelScoreBoard::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelScoreBoard*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelScoreBoard::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelScoreBoard*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void Voxels::VoxelScoreBoard::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelScoreBoard*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void Voxels::VoxelScoreBoard::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelScoreBoard::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelScoreBoard::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelScoreBoard::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelScoreBoard::OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Voxels::VoxelScoreBoard::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline int32_t Voxels::VoxelScoreBoard::GetScoreLine(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"GetScoreLine", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, player);
}
inline void Voxels::VoxelScoreBoard::OnResourcesMined(::GlobalNamespace::NetPlayer*  player, ::Voxels::VoxelWorld*  world, ::ArrayW<int32_t>  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"OnResourcesMined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, world, resources);
}
inline void Voxels::VoxelScoreBoard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelScoreBoard::_UpdateDisplay_g__AddText_11_0(::StringW  text, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"<UpdateDisplay>g__AddText|11_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, length);
}
inline void Voxels::VoxelScoreBoard::_UpdateDisplay_g__AddTextRight_11_1(::StringW  text, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelScoreBoard*>(),
                        {"<UpdateDisplay>g__AddTextRight|11_1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, length);
}
inline void Voxels::VoxelScoreBoard::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelScoreBoard*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Voxels::VoxelScoreBoard::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelScoreBoard*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::VoxelScoreBoard* Voxels::VoxelScoreBoard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelScoreBoard*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelScoreBoard::VoxelScoreBoard()   {
}
