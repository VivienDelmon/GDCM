/*=========================================================================

  Program: GDCM (Grassroots DICOM). A DICOM library

  Copyright (c) 2006-2011 Mathieu Malaterre
  All rights reserved.
  See Copyright.txt or http:/gdcm.sourceforge.net/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/


/*
 * See TestReaderSelectedPrivateGroup
 */

#if 0
struct StreamOffset
{
  const char *filename;
  std::streamoff offset;
};
#endif

static const StreamOffset gdcmSelectedPrivateGroupOffsetDataFiles[] = {
{ "gdcm-ACR-LibIDO.acr",50 },
{ "test.acr",50 },
{ "libido1.0-vol.acr",50 },
{ "gdcm-MR-SIEMENS-16-2.acr",686 },
{ "SIEMENS_SOMATOM-12-ACR_NEMA-ZeroLengthUs.acr",686 },
{ "MR-MONO2-12-an2.acr",546 },
{ "LIBIDO-8-ACR_NEMA-Lena_128_128.acr",50 },
{ "CT-MONO2-12-lomb-an2.acr",366 },
{ "D_CLUNIE_CT1_J2KR.dcm",1178 },
{ "TOSHIBA_J2K_SIZ0_PixRep1.dcm",746 },
{ "ExplicitVRforPublicElementsImplicitVRforShadowElements.dcm",1796 },
{ "LJPEG_BuginGDCM12.dcm",886 },
{ "GE_MR_0025xx1bProtocolDataBlock.dcm",1146 },
{ "LEADTOOLS_FLOWERS-8-MONO2-RLE.dcm",848 },
{ "SIEMENS_ImageLocationUN.dcm",960 },
{ "JPEGDefinedLengthSequenceOfFragments.dcm",1496 },
{ "TOSHIBA_J2K_OpenJPEGv2Regression.dcm",748 },
{ "MR-SIEMENS-DICOM-WithOverlays.dcm",1042 },
{ "GDCMJ2K_TextGBR.dcm",534 },
{ "rle16loo.dcm",524 },
{ "GE_DLX-8-MONO2-Multiframe.dcm",780 },
{ "SC16BitsAllocated_8BitsStoredJ2K.dcm",534 },
{ "MR-MONO2-12-shoulder.dcm",674 },
{ "GE_DLX-8-MONO2-Multiframe-Jpeg_Lossless.dcm",794 },
{ "SIEMENS_MOSAIC_12BitsStored-16BitsJPEG.dcm",1384 },
{ "NM-MONO2-16-13x-heart.dcm",578 },
{ "LEADTOOLS_FLOWERS-8-MONO2-Uncompressed.dcm",848 },
{ "CT-MONO2-16-chest.dcm",838 },
{ "D_CLUNIE_MR4_JPLY.dcm",1028 },
{ "D_CLUNIE_SC1_JPLY.dcm",964 },
{ "MR_Philips_Intera_PrivateSequenceExplicitVR_in_SQ_2001_e05f_item_wrong_lgt_use_NOSHADOWSEQ.dcm",1302 },
{ "D_CLUNIE_VL6_RLE.dcm",866 },
{ "DX_J2K_0Padding.dcm",746 },
{ "D_CLUNIE_XA1_RLE.dcm",800 },
{ "PHILIPS_Intera-16-MONO2-Uncompress.dcm",1622 },
{ "US-RGB-8-esopecho.dcm",598 },
{ "GE_GENESIS-16-MONO2-WrongLengthItem.dcm",760 },
{ "D_CLUNIE_MR3_JPLL.dcm",1200 },
{ "SIEMENS-12-Jpeg_Process_2_4-Lossy-a.dcm",1252 },
{ "D_CLUNIE_MR1_RLE.dcm",908 },
{ "SIEMENS_CSA2.dcm",1260 },
{ "gdcm-MR-PHILIPS-16-Multi-Seq.dcm",1354 },
{ "GE_DLX-8-MONO2-PrivateSyntax.dcm",770 },
{ "D_CLUNIE_MR2_JPLY.dcm",1030 },
{ "DX_GE_FALCON_SNOWY-VOI.dcm",1152 },
{ "AMIInvalidPrivateDefinedLengthSQasUN.dcm",1028 },
{ "SC16BitsAllocated_8BitsStoredJPEG.dcm",606 },
{ "OT-PAL-8-face.dcm",140 },
{ "LEADTOOLS_FLOWERS-16-MONO2-RLE.dcm",848 },
{ "TOSHIBA_J2K_SIZ1_PixRep0.dcm",762 },
{ "D_CLUNIE_RG2_JPLL.dcm",1014 },
{ "SIEMENS_MAGNETOM-12-MONO2-FileSeq1.dcm",968 },
{ "MR_ELSCINT1_00e1_1042_SQ_feff_00e0_Item.dcm",774 },
{ "PHILIPS_GDCM12xBug2.dcm",1184 },
{ "PICKER-16-MONO2-No_DicomV3_Preamble.dcm",496 },
{ "MR_Spectroscopy_SIEMENS_OF.dcm",1372 },
{ "ELSCINT1_JP2vsJ2K.dcm",680 },
{ "US-PAL-8-10x-echo.dcm",496 },
{ "OT-MONO2-8-a7.dcm",186 },
{ "SIEMENS_MAGNETOM-12-MONO2-FileSeq0.dcm",968 },
{ "D_CLUNIE_NM1_JPLL.dcm",1406 },
{ "D_CLUNIE_RG2_JPLY.dcm",1100 },
{ "KODAK-12-MONO1-Odd_Terminated_Sequence.dcm",310 },
{ "CT-MONO2-16-ort.dcm",784 },
{ "D_CLUNIE_VL1_RLE.dcm",856 },
{ "NM-PAL-16-PixRep1.dcm",820 },
{ "ELSCINT1_PMSCT_RLE1.dcm",778 },
{ "GE_GENESIS-16-MONO2-Uncompressed-UnusualVR.dcm",1012 },
{ "D_CLUNIE_MR2_JPLL.dcm",944 },
{ "GE_CT_With_Private_compressed-icon.dcm",1112 },
{ "LEADTOOLS_FLOWERS-16-MONO2-JpegLossless.dcm",850 },
{ "MR_GE_with_Private_Compressed_Icon_0009_1110.dcm",1258 },
{ "TOSHIBA_MRT150-16-MONO2-ACR_NEMA_2.dcm",400 },
{ "simpleImageWithIcon.dcm",616 },
{ "D_CLUNIE_CT1_JLSL.dcm",1162 },
{ "US-IRAD-NoPreambleStartWith0005.dcm",684 },
{ "TheralysGDCM120Bug.dcm",1964 },
{ "SIEMENS_Sonata-16-MONO2-Value_Multiplicity.dcm",1152 },
{ "D_CLUNIE_NM1_RLE.dcm",1366 },
{ "CR-MONO1-10-chest.dcm",298 },
{ "ACUSON-24-YBR_FULL-RLE-b.dcm",822 },
{ "TG18-CH-2k-01.dcm",1294 },
{ "US-MONO2-8-8x-execho.dcm",630 },
{ "GE_RHAPSODE-16-MONO2-JPEG-Fragments.dcm",1164 },
{ "PrivateGEImplicitVRBigEndianTransferSyntax16Bits.dcm",753 },
{ "MR_SIEMENS_forceLoad29-1010_29-1020.dcm",838 },
{ "LEADTOOLS_FLOWERS-16-MONO2-Uncompressed.dcm",848 },
{ "ACUSON-24-YBR_FULL-RLE.dcm",710 },
{ "D_CLUNIE_MR1_JPLY.dcm",1036 },
{ "D_CLUNIE_VL4_RLE.dcm",848 },
{ "MR-MONO2-8-16x-heart.dcm",536 },
{ "PHILIPS_Gyroscan-12-MONO2-Jpeg_Lossless.dcm",1060 },
{ "D_CLUNIE_MR4_JPLL.dcm",942 },
{ "LEADTOOLS_FLOWERS-24-RGB-JpegLossy.dcm",850 },
{ "D_CLUNIE_CT1_J2KI.dcm",1270 },
{ "US-GE-4AICL142.dcm",688 },
{ "CT-MONO2-16-ankle.dcm",750 },
{ "LEADTOOLS_FLOWERS-24-RGB-JpegLossless.dcm",850 },
{ "SIEMENS_MAGNETOM-12-MONO2-FileSeq2.dcm",968 },
{ "RadBWLossLess.dcm",542 },
{ "DermaColorLossLess.dcm",542 },
{ "D_CLUNIE_MR2_RLE.dcm",900 },
{ "CT-SIEMENS-Icone-With-PaletteColor.dcm",1138 },
{ "fffc0000UN.dcm",594 },
{ "PHILIPS_Gyroscan-8-MONO2-Odd_Sequence.dcm",1340 },
{ "BugGDCM2_UndefItemWrongVL.dcm",1466 },
{ "THERALYS-12-MONO2-Uncompressed-Even_Length_Tag.dcm",753 },
{ "SIEMENS_MAGNETOM-12-MONO2-GDCM12-VRUN.dcm",1014 },
{ "05148044-mr-siemens-avanto-syngo.dcm",1174 },
{ "gdcm-JPEG-LossLessThoravision.dcm",954 },
{ "D_CLUNIE_CT1_JPLL.dcm",1164 },
{ "MR16BitsAllocated_8BitsStored.dcm",536 },
{ "gdcm-CR-DCMTK-16-NonSamplePerPix.dcm",420 },
{ "JDDICOM_Sample2-dcmdjpeg.dcm",464 },
{ "SIEMENS_MAGNETOM-12-MONO2-FileSeq3.dcm",968 },
{ "gdcm-JPEG-Extended.dcm",1332 },
{ "CT-SIEMENS-MissingPixelDataInIconSQ.dcm",922 },
{ "LEADTOOLS_FLOWERS-8-MONO2-JpegLossy.dcm",850 },
{ "CT-MONO2-16-brain.dcm",946 },
{ "IM-0001-0066.CommandTag00.dcm",1472 },
{ "SIEMENS_MAGNETOM-12-MONO2-VRUN.dcm",646 },
{ "MAROTECH_CT_JP2Lossy.dcm",1244 },
{ "MR-SIEMENS-DICOM-WithOverlays-extracted-overlays.dcm",1236 },
{ "D_CLUNIE_MR1_JPLL.dcm",952 },
{ "D_CLUNIE_MR4_RLE.dcm",898 },
{ "MEDILABInvalidCP246_EVRLESQasUN.dcm",1182 },
{ "DCMTK_JPEGExt_12Bits.dcm",498 },
{ "D_CLUNIE_RG2_RLE.dcm",966 },
{ "05115014-mr-siemens-avanto-syngo-with-palette-icone.dcm",1026 },
{ "MR-Brucker-CineTagging-NonSquarePixels.dcm",652 },
{ "ITK_GDCM124_MultiframeSecondaryCaptureInvalid.dcm",590 },
{ "D_CLUNIE_RG3_JPLL.dcm",988 },
{ "00191113.dcm",536 },
{ "PhilipsInteraSeqTermInvLen.dcm",922 },
{ "MR_Philips_Intera_PrivateSequenceImplicitVR.dcm",1528 },
{ "gdcm-JPEG-LossLess3a.dcm",1022 },
{ "PHILIPS_Brilliance_ExtraBytesInOverlay.dcm",834 },
{ "D_CLUNIE_RG3_JPLY.dcm",1074 },
{ "PICKER-16-MONO2-Nested_icon.dcm",13296 },
{ "LIBIDO-24-ACR_NEMA-Rectangle.dcm",50 },
{ "SignedShortLosslessBug.dcm",794 },
{ "LEADTOOLS_FLOWERS-8-PAL-RLE.dcm",848 },
{ "MR_Philips-Intera_BreaksNOSHADOW.dcm",1382 },
{ "US-RGB-8-epicard.dcm",668 },
{ "SIEMENS_MAGNETOM-12-MONO2-Uncompressed.dcm",962 },
{ "D_CLUNIE_VL2_RLE.dcm",854 },
{ "3E768EB7.dcm",1282 },
{ "012345.002.050.dcm",964 },
{ "D_CLUNIE_CT1_JLSN.dcm",1260 },
{ "PHILIPS_GDCM12xBug.dcm",1566 },
{ "OsirixFake16BitsStoredFakeSpacing.dcm",664 },
{ "CT_16b_signed-UsedBits13.dcm",1724 },
{ "D_CLUNIE_CT2_RLE.dcm",922 },
{ "LEADTOOLS_FLOWERS-8-PAL-Uncompressed.dcm",848 },
{ "UnexpectedSequenceDelimiterInFixedLengthSequence.dcm",1310 },
{ "rle16sti.dcm",520 },
{ "D_CLUNIE_NM1_JPLY.dcm",1492 },
{ "JDDICOM_Sample2.dcm",450 },
{ "D_CLUNIE_RG1_RLE.dcm",1044 },
{ "DMCPACS_ExplicitImplicit_BogusIOP.dcm",538 },
{ "SIEMENS_Sonata-12-MONO2-SQ.dcm",1228 },
{ "D_CLUNIE_XA1_JPLL.dcm",848 },
{ "NM_Kakadu44_SOTmarkerincons.dcm",874 },
{ "JPEG_LossyYBR.dcm",1142 },
{ "gdcm-MR-PHILIPS-16-NonSquarePixels.dcm",772 },
{ "D_CLUNIE_SC1_RLE.dcm",830 },
{ "SIEMENS-MR-RGB-16Bits.dcm",1466 },
{ "JPEGInvalidSecondFrag.dcm",1394 },
{ "MR_Philips_Intera_No_PrivateSequenceImplicitVR.dcm",1632 },
{ "MARCONI_MxTWin-12-MONO2-JpegLossless-ZeroLengthSQ.dcm",626 },
{ "SIEMENS_MAGNETOM-12-ACR_NEMA_2-Modern.dcm",686 },
{ "LEADTOOLS_FLOWERS-24-RGB-Uncompressed.dcm",848 },
{ "MR_Philips_Intera_SwitchIndianess_noLgtSQItem_in_trueLgtSeq.dcm",1622 },
{ "MR-MONO2-16-head.dcm",752 },
{ "D_CLUNIE_XA1_JPLY.dcm",934 },
{ "D_CLUNIE_CT2_JPLL.dcm",966 },
{ "D_CLUNIE_RG3_RLE.dcm",934 },
{ "ALOKA_SSD-8-MONO2-RLE-SQ.dcm",612 },
{ "GE_LOGIQBook-8-RGB-HugePreview.dcm",742 },
{ "gdcm-US-ALOKA-16.dcm",702 },
{ "D_CLUNIE_US1_RLE.dcm",918 },
{ "undefined_length_un_vr.dcm",1434 },
{ "D_CLUNIE_MR3_JPLY.dcm",1286 },
{ "D_CLUNIE_VL3_RLE.dcm",866 },
{ "US-IRAD-NoPreambleStartWith0003.dcm",1504 },
{ "CT-MONO2-8-abdo.dcm",422 },
{ "FUJI-10-MONO1-ACR_NEMA_2.dcm",312 },
{ "D_CLUNIE_MR3_RLE.dcm",1158 },
{ "D_CLUNIE_CT1_RLE.dcm",1122 },
{ "KODAK_CompressedIcon.dcm",890 },
{ "D_CLUNIE_RG1_JPLL.dcm",1084 },
{ "XA-MONO2-8-12x-catheter.dcm",644 },
{ "PHILIPS_Gyroscan-12-Jpeg_Extended_Process_2_4.dcm",1314},
{ "SIEMENS_SYNGO-12-MONO2-LUTWrongLength512.dcm", 1596 },
{ "00191113.dcm",536 },
{ "JPEGNote_empty.dcm", 482 },
{ "JPEGLS_CharLS_10742.dcm", 532 },
{ "JPEGLosslessYBR_FULL_422.dcm", 534 },
{ "JPEGNote_missing.dcm", 406 },
{ "JPEGNote_bogus.dcm", 482 },
{ "RLEDebianBug816607Orig.dcm", 534 },
{ "IllegalGroup2ImplicitTS.dcm", 1088 },
{ "JPEG_LS_InvalidEscapeSequence_COM_padding.dcm", 534 },
{ "LengthOfItemLarger.dcm", 1044 },
{ "GE_MR_0025xx1bProtocolDataBlockXML.dcm",1358},
{ "EmptyIcon_Bug417.dcm",1000},
{ "EnhancedWithIPPPerFrameIOPShared.dcm",772},
{ "FUJI-ffff-MONO1-J2K.dcm",982},
{ "JPEGLosslessSeNonZero.dcm",530},
{ "dicomdir_With_embedded_icons",7125212 },
{ "dicomdir_Pms_WithVisit_WithPrivate_WithStudyComponents",37218 },
{ "dicomdir_Acusson_WithPrivate_WithSR",3826 },
{ "dicomdir_Pms_With_heavy_embedded_sequence",3003414 },
{ "DICOMDIR-Philips-EasyVision-4200-Entries",1297194 },
{ "DICOMDIR",1112434 },
{ "DICOMDIR_MR_B_VA12A",14853880 },

/* Stopping condition */
{ nullptr ,0 },
};
